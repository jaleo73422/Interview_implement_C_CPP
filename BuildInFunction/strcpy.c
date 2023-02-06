#include <stdio.h>

char* strcpy(char* dict, const char* src) {
    char* ptr = dict;

    while (*src != '\0') {
        // *(dict++) = *src;
        *dict++ = *src;
        src++;
    }

    *dict = '\0';

    return ptr;
}

int main() {
    char dict[25];
    // char dict[] = "01234567891011";
    char src[] = "Hello word.";

    printf("%s\n", strcpy(dict, src));

    return 0;
}