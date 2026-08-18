#include <stdio.h>
int lower(char mas) {
    char result = mas;
    if (mas >= 'A' && mas <= 'Z') return result += 32;
}

int main() {    
    char mas[301], isChar;
    scanf(" %300[^\n]", mas);
    scanf(" %c", &isChar);

    int pos[301];
    int index_pos = 0;
    
    for (int i = 0; mas[i] != '\0'; i++) {
        char l_mas = lower(mas[i]);
        char l_isChar = lower(isChar);
        if (l_mas == l_isChar) {
            pos[index_pos++] = i;
        }
    }

    if (index_pos) {
        printf("There is/are %d \"%c\" in the above sentences.\n", index_pos, isChar);
        printf("Position: ");
        for (int i = 0; i < index_pos; i++) printf("%s%d", i ? ", " : "", pos[i] + 1);
    } else {
        printf("Not found.");
    }
    return 0;
}