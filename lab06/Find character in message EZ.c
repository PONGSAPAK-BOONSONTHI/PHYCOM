#include <stdio.h>

int lower(char mas[]) {
    for (int i = 0; mas[i] != '\0'; i++) {
        if (mas[i] >= 'A' && mas[i] <= 'Z') {
            mas[i] = mas[i] + 32;
        }
    }
}

int main() {    
    char mas[301], isChar;
    scanf(" %300[^\n]", mas);
    scanf(" %c", &isChar);

    lower(mas);

    char isChar_;
    if (isChar >= 'A' && isChar <= 'Z') {
        isChar_ = isChar;
        isChar = isChar + 32;
    } else {
        isChar_ = isChar;
    }

    int pos[301];
    int index_pos = 0;
    
    for (int i = 0; mas[i] != '\0'; i++) {
        if (mas[i] == isChar) {
            pos[index_pos++] = i;
        }
    }

    if (index_pos) {
        printf("There is/are %d \"%c\" in the above sentences.\n", index_pos, isChar_);
        printf("Position: ");
        for (int i = 0; i < index_pos; i++) {
            printf("%s%d", i ? ", " : "", pos[i] + 1);
        }
    } else {
        printf("Not found.");
    }
    return 0;
}