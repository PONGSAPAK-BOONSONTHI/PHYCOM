#include <stdio.h>

int main() {
    double mile, km;
    km = 1.60934;
    scanf("%lf", &mile);
    printf("%.2lf", mile * km);
    return 0;
}