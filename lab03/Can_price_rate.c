#include <stdio.h>

int main() {
    double p, rr, h;
    double pi = 3.14159265359;
    
    scanf("%lf", &p);
    scanf("%lf", &rr);
    scanf("%lf", &h);
    
    double r = rr / 2;
    double v = h * r * r * pi;
    double baht_ml = p / v;

    printf("Volume : %.2lfml\n", v);
    printf("Baht/ml : %.4lf\n", baht_ml);
    return 0;
}