#include <stdio.h>
double Pow(double val, int n) {
    double result = 1;
    for (int i = 0 ; i < n; i++) result *= val;
    return result;
}

double Sqrt(double val, int n) {
    double guess = val / n;
    for (int i = 0; i < 100; i++) 
        guess = ((n - 1) * guess + val / Pow(guess, n - 1)) / n;
    return guess;
}

int main() {
    double a, b, c, per, area;
    scanf("%lf", &a);
    scanf("%lf", &b);
    c = Sqrt(Pow(a, 2) + Pow(b, 2), 2);
    per = a + b + c;
    area = b * a * 0.5;
    printf("Perimeter: %.2lf\n", per);
    printf("Area: %.2lf", area);
    return 0;
}
