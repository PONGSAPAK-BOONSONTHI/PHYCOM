// String ABC 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char text[201];
    scanf("%[^\n]", text);

    qsort(text, strlen(text), sizeof(char), cmp);

    printf("%s", text);
    return 0;
}