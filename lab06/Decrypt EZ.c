#include <stdio.h>

int main() {
    char mas[201];
    scanf(" %200[^\n]", mas);
    char code[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    for (int i = 0; mas[i] != '\0'; i++) {
        int isLower = 0;
        if (mas[i] >= 'a' && mas[i] <= 'z') {
            mas[i] -= 32;
            isLower = 1;
        }
        for (int j = 0; code[j] != '\0'; j++) {
            if (mas[i] == code[j]) {
                mas[i] = code[(j + 5 + 26) % 26];
                if (isLower) mas[i] += 32;
                break;
            }
        }
    }
    printf("%s", mas);
    return 0;
}