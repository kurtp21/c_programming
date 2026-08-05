#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int string_length(const char *text) {
    int i;
    const char *ptr = text;

    while (*ptr != '\0') {
        i++;
        ptr++;
    }

    return i;
}

/*int count_vowels(const char *text);
void reverse_string(char *text);
char *copy_word(const char *source);

const char *find_longest_word(int count, char *words[]);

void calculate_totals(
    int count,
    char *wordsp[],
    int *total_characters,
    int *total_vowels
);
*/