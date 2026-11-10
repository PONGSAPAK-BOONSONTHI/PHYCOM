// String Space
#include <stdio.h>

int main() {
    char text[200];
    scanf(" %150[^\n]", text);

    // char result[200];
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ') {
            printf("%c", text[i]);
        }
    }
    return 0;
}