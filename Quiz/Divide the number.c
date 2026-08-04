#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    double result = (double) a / (double) b;
    printf("%.2lf", result);
    return 0;
}