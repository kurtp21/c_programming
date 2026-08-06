#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(int argc, char *argv[]) {
    int i;
    char *word;

    if (argc < 2) {
        printf("Error: Argument(s) not detected\n");
        printf("Please try again\n");
        return EXIT_FAILURE;
    }

    printf("Total arguments recieved: %d\n", argc - 1);

    for (i = 1; i < argc; i++) {
        printf("Length of %s is %d\n", argv[i], string_length(argv[i]));
        printf("Amount of vowels in %s is %d\n", argv[i], count_vowels(argv[i]));

        printf("Original word is %s and the address is %p\n", argv[i], (void*)&argv[i]);

        word = copy_word(argv[i]);
        printf("Copied word is %s and the address is %p\n", word, (void*)&word);
        free(word);
    }
    return EXIT_SUCCESS;
}