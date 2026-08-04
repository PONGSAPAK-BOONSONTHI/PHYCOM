#include <stdio.h>
#include <math.h>

// gcc source.c -lm

int main() {
    // 9 + 16 = 25
    double x, y, z;

    scanf("%lf", &x);
    scanf("%lf", &y);
    z = sqrt(pow(x, 2) + pow(y, 2));
    printf("%.2lf", z);
}