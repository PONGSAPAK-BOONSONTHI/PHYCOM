#include <stdio.h>

int main() {
    char mas[101];
    scanf("%s", mas);

    int mas_count = 0;
    for (int i = 0; mas[i] != '\0'; i++) mas_count = i;

    int isPalindrome = 1;
    for (int i = 0; i < mas_count; i++) {
        if (mas[i] != mas[mas_count - i]) {
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