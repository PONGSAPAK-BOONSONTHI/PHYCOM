#include <stdio.h>

int main() {
    double x, y, result;

    scanf("%lf", &x);
    scanf("%lf", &y);

    result = (x + y) * 2;
    printf("Perimeter of rectangle = %.4lf units", result);
    return 0;
}