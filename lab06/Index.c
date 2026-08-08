#include <stdio.h>

int main() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int input;
    while (1) {
        scanf("%d", &input);
        if (input >= 1 && input <= 20) {
            for (int i = 0; i < sizeof(M) / sizeof(M[0]); i++) {
                if (input == M[i]) {
                    printf("%d is in M at index [%d]", input, i);
                    return 0;
                }
            }
            for (int i = 0; i < sizeof(N) / sizeof(N[0]); i++) {
                if (input == N[i]) {
                    printf("%d is in N at index [%d]", input, i);
                    return 0;
                }
            }
            printf("%d is not in neither M nor N", input);
            return 0;
        }
    }
    return 0;
}