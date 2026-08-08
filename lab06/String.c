#include <stdio.h>

int main() {
    char str[101];
    int index;
    scanf(" %100[^\n]", str);
    scanf("%d", &index);
    for (int i = 0; i <= index - 1; i++) {
        printf("%c", str[i]);
    }
    return 0;
}