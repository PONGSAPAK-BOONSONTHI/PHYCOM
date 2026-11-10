// String Cat Finding
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[2001];
    char lower[2001];
    scanf(" %2000[^\n]", text);

    int i = 0;
    for (i = 0; text[i] != '\0'; i++) {
        lower[i] = tolower((unsigned char) text[i]);
    }
    lower[i] = '\0';
    
    char *p = lower;
    int f = 1;
    while ((p = strstr(p, "cat")) != NULL) {
        if (!f) printf(", ");
        printf("%d", (int) (p - lower));
        f = 0;
        p++;
    }
    return 0;
}

