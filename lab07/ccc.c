#include <stdio.h>
#include <math.h>

int main() {
    double x, y, c;
    scanf("%lf %lf", &x, &y);
    c = sqrt((pow(x, 2) + pow(y, 2)));
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", x, y, c);
}