#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int setName(char arr[61]) {
    int isGap = -1;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') arr[i] += 32;
        if (arr[i] == ' ') isGap = i;
    }
    if (arr[0] >= 'a' && arr[0] <= 'z') arr[0] -= 32;
    if (arr[isGap + 1] >= 'a' && arr[isGap + 1] <= 'z') arr[isGap + 1] -= 32;
}

int cmp(const void *a, const void *b) {
    const char *str1 = (const char *)a;
    const char *str2 = (const char *)b;

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    
    return str1[i] - str2[i];
}

int main() {
    int n;
    scanf("%d", &n);
    char list_name[n][61];
    for (int i = 0; i < n; i++) {
        scanf(" %60[^\n]", list_name[i]);
        setName(list_name[i]);
    }
    qsort(list_name, n, sizeof(list_name[0]), cmp);
    for (int i = 0; i < n; i++) {
        printf("%s\n", list_name[i]);
    }
    return 0;
}