#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int upper(char mas[]) {
    int gap = -1    ;
    for (int i = 0; mas[i] != '\0'; i++) {
        if (mas[i] >= 'A' && mas[i] <= 'Z') mas[i] += 32;
        if (mas[i] == ' ') gap = i;
    }
    mas[0] -= 32;
    if (gap != -1) mas[gap + 1] -= 32;
}

int cmp(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    char Arr_name[n][61];
    for (int i = 0; i < n; i++) scanf(" %60[^\n]", Arr_name[i]);
    for (int i = 0; i < n; i++) upper(Arr_name[i]);
    qsort(Arr_name, n, sizeof(Arr_name[0]), cmp);
    for (int i = 0; i < n; i++) printf("%s\n", Arr_name[i]);
    return 0;
}