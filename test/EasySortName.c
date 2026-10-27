#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cpm(const void *a, const void *b) {
    // sort a - z
    // return strcmp((const char *)a, (const char *)b);
    // sort z - a
    return -strcmp((const char *)a, (const char *)b);
}

int main() {
    int n; scanf("%d", &n);
    char arr[n][101];
    for (int i = 0; i < n; i++) scanf(" %100[^\n]", arr[i]);
    qsort(arr, n , sizeof(arr[0]), cpm);
    for (int i = 0 ; i < n; i++) printf("%d %s\n",i + 1 , arr[i]);
    return 0;
}
