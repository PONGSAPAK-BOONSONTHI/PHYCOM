// String Count 
#include <stdio.h>
#include <ctype.h>

int main() {
    char target, text[200];
    scanf(" %c", &target);
    scanf(" %150[^\n]", text);

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (tolower(text[i]) ==  tolower(target)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}