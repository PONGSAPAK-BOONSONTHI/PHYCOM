#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    if (M > N) {
        for (int i = M; i >= N; i--) {
            printf("%d ", i);
        }
    } else {
        for (int i = M; i <= N; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}