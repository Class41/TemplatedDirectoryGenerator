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
                printf("Usage: %s -t \"templatefile\" -p \"path\"\n"
                       "-t location of the template file to be used\n"
                       "\tTemplate files must use tabs to indiciate folder level, and newline to indicate end of folder.\n\n"
                       "\tone\n"
                       "\t\ttwo\n"
                       "\t\t\tthree\n"
                       "\t\tfour\n\n"
                       "\tThis will generate a structure with \"one\" as the root, \"two\" and \"four\" are children of one,\n"
                       "\tand three is a child of two.\n"
                       "-p base path to generate the folder structure\n"
                       "-h view this dialogue\n", argv[0]);
                if (paths != NULL && template != NULL) {
                    executeTemplate(template, paths);
                } else {
                    printf("-p and -t flags are REQUIRED! For more information, use %s -h\n", argv[0]);
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
        executeTemplate(template, paths);
    } else {
        printf("-p and -t flags are REQUIRED! For more information, use %s -h for more info.\n", argv[0]);
    }

    free(template);
    free(paths);
    return 0;
}