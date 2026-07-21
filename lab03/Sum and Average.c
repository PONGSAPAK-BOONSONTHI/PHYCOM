#include <stdio.h>

int main() {
    double ip1, ip2, ip3, ip4;

    scanf("%lf", &ip1);
    scanf("%lf", &ip2);
    scanf("%lf", &ip3);
    scanf("%lf", &ip4);

    double sum = ip1 + ip2 + ip3 + ip4;
    double ave = sum / 4;

    printf("Summation is %.2lf\n", sum);
    printf("Average is %.3lf\n", ave);
    return 0;
}