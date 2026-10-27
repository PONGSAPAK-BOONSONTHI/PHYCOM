#include <stdio.h>
#include <string.h>

int main() {
    char mes[101], temp[101];
    scanf("%s", mes);
    int index = strlen(mes);
    int j = 0;
    for (int i = index - 1; i >= 0; i--) {
        temp[j] = mes[i];
        j++;
    }
    temp[j] = '\0';
    if (strstr(mes, temp)) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
    return 0;
}