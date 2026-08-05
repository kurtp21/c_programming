#include <stdlib.h>
#include <stdio.h>
#include "ownlib.h"

void nprint_word(int n, const char *word) {
    int i;

    for (i = 0; i <= n; i++) {
        printf("%s\n", word);
    }
}