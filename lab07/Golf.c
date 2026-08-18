#include <stdio.h>
#include <math.h>

int main() {
    double d, u, h, r;
    double PI = 3.141592653589793;
    double g = 9.81;
    scanf("%lf", &d);
    scanf("%lf", &u);
    r = (d * PI) / 180;
    h = (pow(u, 2) * pow(sin(r), 2)) / (2 * g);
    printf("theta (degree) : %.0lf\n", d);
    printf("u (m/s) : %.0lf\n", u);
    printf("h (m) : %.4lf", h);
    return 0;
}