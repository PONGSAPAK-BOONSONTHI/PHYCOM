#include <stdio.h>

int main() {
    int sum ,input;
    while (1) {
        scanf("%d", &input);
        if (input == -9) break;
        sum += input;
    }
    printf("%d", sum);
}