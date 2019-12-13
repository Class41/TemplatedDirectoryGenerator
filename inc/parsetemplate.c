#include <bits/types/FILE.h>
#include <unistd.h>
#include "parsetemplate.h"
#include "stdio.h"

void executeTemplate(char *sourceFile) {
    if (access(sourceFile, F_OK) == -1) {
        printf("File %s does not exist or cannot be accessed!", sourceFile);
        return;
    }

    FILE *template = fopen(sourceFile, "r");

    size_t* linen = NULL;
    char** line = NULL;
    int linelength = NULL;

    printf("Starting template read...\n");
    while ((linelength = getline(line, linen, template)) != -1) {
        printf("Line: %s", line);
    }
    printf("Folder structure generated\n");
}