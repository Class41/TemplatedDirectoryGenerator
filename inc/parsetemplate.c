#include <bits/types/FILE.h>
#include <unistd.h>
#include "parsetemplate.h"
#include "stdio.h"
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>

/* reads template and path to build out the directory structure */
void executeTemplate(char *sourceFile, char *basePath) {

    if (access(sourceFile, F_OK) == -1) {
        printf("File %s does not exist or cannot be accessed!\n", sourceFile);
        return;
    }

    FILE *template = fopen(sourceFile, "r");

    /* data read from template vars */
    size_t linen = 0;
    char *line = NULL;
    int lineLength = 0;

    /* data retained in stack format post-parse */
    int lastDepth = 0;
    char **pathStack = calloc(lastDepth + 1, sizeof(char *));

    printf("Starting template read...\n");
    while ((lineLength = getline(&line, &linen, template)) != -1) {
        int indent = 0;
        for (int i = 0; i < lineLength; i++) { //calculate indent for current line
            indent = (line[i] == '\t') ? indent + 1 : indent;
        }

        if (lastDepth != indent) {
            if (lastDepth > indent) { //free allocated space if size needs to be shrunk
                for (int i = lastDepth; i > indent; i--)
                    free(pathStack[i]);
            }

            pathStack = realloc(pathStack, sizeof(char *) * (indent + 1)); //realloc to new size
            lastDepth = indent;
        }
        pathStack[indent] = calloc(strlen(line) - indent, sizeof(char)); //remove indents & alloc space
        strcpy(pathStack[lastDepth], line + indent); //copy text with no indents

        char fullPath[2500];
        strcpy(fullPath, basePath);
        for (int i = 0; i <= lastDepth; i++) {
            strcat(fullPath, "/");
            if (pathStack[i][strlen(pathStack[i]) - 1] == '\n') //remove newline characters from strings
                pathStack[i][strlen(pathStack[i]) - 1] = (char) NULL;
            strcat(fullPath, pathStack[i]);
        }
        if (mkdir(fullPath, 0700) == -1) {
            printf("Unable to generate %s (%s)\n", fullPath, strerror(errno));
        }
    }
    free(pathStack);
    printf("Folder structure generated\n");

    fclose(template);
}
