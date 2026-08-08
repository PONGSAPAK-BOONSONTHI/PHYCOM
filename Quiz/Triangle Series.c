#include <stdio.h>

int main() {
    unsigned int n, result = 0;
    scanf("%u", &n);
    for (int i = 0; i <= n; i++) {
        result += i;
    }
    printf("%u", result);
    return 0;
}
