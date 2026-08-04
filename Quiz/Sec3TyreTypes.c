#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if ((ch == 'S') || (ch == 's')) printf("Soft");
    if ((ch == 'M') || (ch == 'm')) printf("Medium");
    if ((ch == 'H') || (ch == 'h')) printf("Hard");
    if ((ch == 'I') || (ch == 'i')) printf("Intermediate");
    if ((ch == 'W') || (ch == 'w')) printf("Wet");
    return 0;
}