#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "inc/parsetemplate.h"

int main(int argc, char *argv[]) {
    char *paths = NULL;
    char *template = NULL;

    int opt;
    while ((opt = getopt(argc, argv, "p:t:h")) != -1) {
        switch (opt) {
            case 'p':
                paths = calloc(strlen(optarg), sizeof(char));
                strcpy(paths, optarg);
                break;
            case 't':
                template = calloc(strlen(optarg), sizeof(char));
                strcpy(template, optarg);
                break;
            case 'h':
                printf("Usage: %s -t \"templatefile\" -p \"path1;path2;...\"\n"
                       "-t location of the template file to be used\n"
                       "-p list of paths to generate the folder structure\n"
                       "-h view this dialogue\n", argv[0]);
                if (paths != NULL && template != NULL) {
                    executeTemplate(template);
                } else {
                    printf("-p and -t flags are REQUIRED! For more information, use %s -h", argv[0]);
                }
                exit(0x1);
            case '?':
                fprintf(stderr, "Please see %s -h for more information.\n", argv[0]);
                break;
            default:
                exit(0x100);
        }
    }

    if (paths != NULL && template != NULL) {
        executeTemplate(template);
    } else {
        printf("-p and -t flags are REQUIRED! For more information, use %s -h", argv[0]);
    }

    free(template);
    free(paths);
    return 0;
}