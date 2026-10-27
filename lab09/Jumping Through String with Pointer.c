#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    char *str = (char *) malloc((n + 1) * sizeof(char));
    scanf(" %[^\n]s", str);

    char *ptr = str;
    while(*ptr != '\0') {
        printf("%c", *ptr);
        for (int i = 0; i < m && *ptr != '\0'; i++) ptr++;
    }

    free(str);
    str = NULL;

    return 0;
}