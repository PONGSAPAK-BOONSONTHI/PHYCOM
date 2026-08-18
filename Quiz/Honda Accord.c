#include <stdio.h>

int main() {
    char name_car[101];
    int n, val;
    scanf(" %100[^\n]", name_car);
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &val);

    int MAX, MIN;
    for (int i = 0; i < n; i++) {
        if (val == arr[0]) {
            MIN = arr[0];
            MAX = arr[1];
            break;
        }

        if (i == n - 1) {
            MIN = arr[i];
            MAX = 0;
        }

        if (val <= arr[i]) {
            MAX = arr[i];
            MIN = arr[i - 1];
            break;
        }
    }

    printf("%s\n", name_car);
    if (MAX) {
        printf("%d - %d", MIN, MAX);
    } else if (MIN) {
        printf("> %d", MIN);
    }
    return 0;
}