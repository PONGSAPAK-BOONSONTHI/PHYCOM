#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char *) malloc(101 * sizeof(char));
    scanf("%[^\n]s", str);

    int len = 0;
    char *ptr = str;
    while(*ptr != '\0') {
        len++;
        ptr++;
    }
    printf("%d", len);

    free(str);
    str = NULL;

    return 0;
}
