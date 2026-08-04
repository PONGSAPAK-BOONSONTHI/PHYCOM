#include <stdio.h>

int main() {
    double price, per, n, result_per, result_bonus;
    scanf("%lf", &price);
    scanf("%lf", &per);
    scanf("%lf", &n);

    result_per = (price * n) * (1 - (per / 100.0));
    result_bonus = (price * (n - (int) (n / 3)));
    
    if (result_per <= result_bonus) {
        printf("Discount %.0lf%%\n", per);
        printf("%.2lf\n", result_per);
    } else {
        printf("Buy 2 Get 1\n");
        printf("%.2lf\n", result_bonus);
    }
}