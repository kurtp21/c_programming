#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(int argc, char *argv[]) {
    int i;

    printf("Total arguments recieved: %d\n", argc - 1);

    for (i = 0; i < argc - 1; i++) {
        printf("Length of %s is %d", argv[i + 1], string_length(argv[i + 1]));
    }

    return EXIT_SUCCESS;
}