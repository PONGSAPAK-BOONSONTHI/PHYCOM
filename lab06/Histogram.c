#include <stdio.h>

int main() {
    int n ;
    scanf("%d", &n);
    char list_char[26];
    int list_num[26];
    int list_count = 0;

    for (int i = 0; i < n; i++) {
        char c;
        scanf(" %c", &c);

        if (c >= 'A' && c <= 'Z') c += 32;

        int InList = 0;
        int index = 0;
        for (int j = 0; j < list_count; j++) {
            if (c == list_char[j]) {
                index = j;
                InList = 1;
                break;
            }           
        }

        if (InList == 0) {
            list_char[list_count] = c;
            list_num[list_count] = 1;
            list_count++;
        } else {
            list_num[index]++;
        }
    }

    for (int i = 0; i < list_count; i++) {
        printf("%c: %d\n", list_char[i], list_num[i]);
    }
    return 0;
}