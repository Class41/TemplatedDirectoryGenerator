#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *paths = NULL;
    char *template = NULL;

    int opt;
    while((opt = getopt(argc, argv, "p:t:h")))
    {
        switch (opt)
        {
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
                break;
            case '?':
                    fprintf(stderr, "Please see %s -h for more information.\n", argv[0]);
                break;
            default:
                exit(0x100);
        }
    }

        free(template);
        free(paths);
    return 0;
}