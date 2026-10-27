#include <stdio.h>
double Pow(double val, int n) {
    double result = 1;
    for (int i = 0 ; i < n; i++) result *= val;
    return result;
}

double Sqrt(double val) {
    double g = val / 2;
    for (int i = 0; i < 100; i++) g = (g + val / g) / 2.0;
    return g;
}

int main() {
    double a, b, c, per, area;
    scanf("%lf", &a);
    scanf("%lf", &b);
    c = Sqrt(Pow(a, 2) + Pow(b, 2));
    per = a + b + c;
    area = b * a * 0.5;
    printf("Perimeter: %.2lf\n", per);
    printf("Area: %.2lf", area);
    return 0;
}
