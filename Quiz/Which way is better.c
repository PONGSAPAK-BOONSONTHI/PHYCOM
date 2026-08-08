#include <stdio.h>

int main() {
    double fuel_price, way[4], fuel_rate[4];
    scanf("%lf", &fuel_price);
    for (int i = 0; i < 4; i++) scanf("%lf", &way[i]);
    for (int i = 0; i < 4; i++) scanf("%lf", &fuel_rate[i]);

    double avg_exp = 0, avg_rom = 0;
    int count_exp = 0, count_rom = 0;
    for (int i = 0; i < 4; i++) {
        double liters, cost;
        int len = 0, toll = 0;
        if (way[i]) {
            len = 29;
            toll = 60;
        } else {
            len = 25;
            toll = 0;
        }
        if (fuel_rate[i] == 0) {
            liters = 0;
            cost = 0;
        } else {
            liters = len / fuel_rate[i];
            cost  = (liters * fuel_price) + toll;
        }
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n", i + 1, liters, cost);
        if (way[i]) {
            avg_exp += cost;
            count_exp++;
        } else { 
            avg_rom += cost;
            count_rom++;
        }
    }
    if (count_exp == 0) count_exp = 1;
    if (count_rom == 0) count_rom = 1;
    printf("Expressway: %.2lf Baht\n", avg_exp / count_exp );
    printf("Romklao: %.2lf Baht\n", avg_rom / count_rom );
    return 0;
}