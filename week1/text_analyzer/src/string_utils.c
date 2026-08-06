#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int string_length(const char *text) {
    int count;
    const char *ptr;
    
    count = 0;
    ptr = text; 

    while (*ptr != '\0') {
        count++;
        ptr++;
    }

    return count;
}

int count_vowels(const char *text) {
    int num_vowels;
    const char *ptr;

    num_vowels = 0;
    ptr = text;

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            num_vowels++;
        }
        ptr++;
    }

    return num_vowels;
}
/*void reverse_string(char *text);
char *copy_word(const char *source);

const char *find_longest_word(int count, char *words[]);

void calculate_totals(
    int count,
    char *wordsp[],
    int *total_characters,
    int *total_vowels
);
*/