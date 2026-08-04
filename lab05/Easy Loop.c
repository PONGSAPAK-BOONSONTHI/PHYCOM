#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N > 0) {
        for (int i = N; i >= 0; i--) {
            printf("%d ", i);
        }
    } else {
        for (int i = N; i <= 0; i++) {
            printf("%d ", i);
        } 
    }
    return 0;
}