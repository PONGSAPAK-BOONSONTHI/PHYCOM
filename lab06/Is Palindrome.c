#include <stdio.h>

int main() {
    char mas[101];
    scanf("%s", mas);

    int mas_count = 0;
    for (int i = 0; mas[i] != '\0'; i++) mas_count = i + 1;

    char temp[101];
    int index = 0;
    for (int i = mas_count - 1; i >= 0; i--) {
        temp[index++] = mas[i];
    }
    temp[index] = '\0';

    int isPalindrome = 1;
    for (int i = 0; i < mas_count; i++) {
        if (temp[i] != mas[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
    return 0;
}