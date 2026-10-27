#include <stdio.h>
#include <string.h>
int low(char arr[101]) {
    for (int i = 0; arr[i] != '\0'; i++) if (arr[i] >= 'A' && arr[i] <= 'Z') arr[i] += 32;
}

int convert(char arr[101]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') arr[i] += 32;
        else if (arr[i] >= 'a' && arr[i] <= 'z') arr[i] -= 32;
    }
}

// int same(char arr1[], char arr2[]) {
//     int i = 0;
//     while (arr1[i] != '\0' && arr1[i] != '\0') {
//         if (low(arr1[i]) != low(arr2[i])) return 0;
//         i++;
//     }
//     return 1;
// }

int main() {
    char name[2][101];
    for (int i = 0; i < 2; i++) scanf(" %100[^\n]", name[i]);
    convert(name[0]);
    convert(name[1]);
    printf("*** Results ***\n");
    printf("%s\n", name[0]);
    printf("%s\n", name[1]);
    printf("***************\n");
    low(name[0]);
    low(name[1]);
    if (strstr(name[0], name[1])) {
        printf("Both strings are the same.");
    } else {
        printf("Both strings are not the same.");
    }
    return 0;
}