#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(int argc, char *argv[]) {
    int i;

    if (argc < 2) {
        printf("Error: Argument(s) not detected\n");
        printf("Please try again\n");
        return EXIT_FAILURE;
    }

    printf("Total arguments recieved: %d\n", argc - 1);

    for (i = 1; i < argc; i++) {
        printf("Length of %s is %d\n", argv[i], string_length(argv[i]));
        printf("Amount of vowels in %s is %d\n", argv[i], count_vowels(argv[i]));
    }

    return EXIT_SUCCESS;
}