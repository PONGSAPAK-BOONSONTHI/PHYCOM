#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == l || j == r) {
                printf("-");
            } else {
                printf("#");
            }
        }
        l++;
        r--;
        printf("\n");
    }
    return 0;
} 