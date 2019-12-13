#include <bits/types/FILE.h>
#include <unistd.h>
#include "parsetemplate.h"
#include "stdio.h"
#include <string.h>

void executeTemplate(char *sourceFile) {

    if (access(sourceFile, F_OK) == -1) {
        printf("File %s does not exist or cannot be accessed!", sourceFile);
        return;
    }

    FILE *template = fopen(sourceFile, "r");

    size_t linen = 0;
    char *line = NULL;
    int linelength = 0;

    char **pathstack = NULL;
    int *psp = 0;

    printf("Starting template read...\n");
    while ((linelength = getline(&line, &linen, template)) != -1) {
        int indent = 0;
        for (int i = 0; i < linelength; i++) {
            indent = (strcmp(&line[i], '\t') == 0) ? indent++ : indent;
        }
        printf("depth: %i\n", indent);
    }
    printf("Folder structure generated\n");

    fclose(template);
}