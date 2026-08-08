#include <stdio.h>

int len(char mas[]) {
    int len = 0;
    while (mas[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char mas[101];
    scanf(" %100[^\n]", mas);
    for (int i = len(mas) - 1; i >= 0; i--) {
        printf("%c", mas[i]);
    }
    return 0;
}