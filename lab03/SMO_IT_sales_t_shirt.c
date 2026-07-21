#include <stdio.h>

int main() {
    double p, s, n, sum, result;    

    scanf("%lf", &p);
    scanf("%lf", &s);
    scanf("%lf", &n);

    result = (p * n) * (1 - (s / 100));
    printf("%.2lf", result);
    return 0;
}