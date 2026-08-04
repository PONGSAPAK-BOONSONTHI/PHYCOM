#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int M = N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + i; j++) {
            if (j >= M - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        M--;
        printf("\n");
    }
    return 0;
}