#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char *) malloc(101 * sizeof(char));
    if (str == NULL) return 1;

    scanf("%100[^\n]", str);

    int lower = 0;
    int upper = 0;
    int digit = 0;

    char *ptr = str;
    while(*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            upper++;
        } else if (*ptr >= 'a' && *ptr <= 'z') {
            lower++;
        } else if (*ptr >= '0' && *ptr <= '9') {
            digit++;
        }
        ptr++;
    }

    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d\n", digit);

    free(str);
    str = NULL;

    return 0;
}