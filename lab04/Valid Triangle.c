#include <stdio.h>

int main() {
    double a, b, c;
    int A, B, C;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
     
    A = a + b > c;
    B = a + c > b;
    C = b + c > a;

    if (A && B && C) {
        printf("Triangle is valid.");
    } else {
        printf("Triangle is not valid.");
    }
    return 0;
}