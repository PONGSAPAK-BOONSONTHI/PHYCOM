// String Abbreviation 
#include <stdio.h>

int main() {
    char text[200];
    scanf("%[^\n]", text);
    
    int print = 1;
    for (int i = 0 ; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            print = 0;
            printf("%c.", text[i + 1]);
        } else if (print == 1) {
            print = 0;
            printf("%c.", text[i]);
        }
    }
    return 0;
}