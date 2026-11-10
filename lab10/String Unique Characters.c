// String Unique Characters
#include <stdio.h>
#include <string.h>

int main() {
    char s[105];

    if (scanf("%100[^\n]", s) != 1) {
        return 1;
    }

    s[strcspn(s, "\r\n")] = '\0';

    int found = 1;

    while (found) {
        int j = 0;
        found = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == s[i + 1]) {
                found = 1;
                i++;
            }
            else {
                s[j++] = s[i];
            }
        }
        s[j] = '\0';

        if (found) {
            printf("%s\n", s);
        }
    }

    return 0;
}