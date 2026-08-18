#include <stdio.h>
#include <math.h>
int equal_name(char Arr1[], char Arr2[]) {
    // Arr1 == Arr2 ? T
    for (int i = 0; Arr1[i] != '\0' && Arr2[i] != '\0'; i++) {
        if (Arr1[i] != Arr2[i]) return 0;
    }
    return 1;
}

int main(void) {
    int n;
    scanf("%d", &n);
    double fuel[n][3];
    char name[3][51];
    double sum_fuel1 = 0, sum_fuel2= 0, sum_fuel3 = 0;
    for (int i = 0; i < 3; i++) scanf("%s", name[i]);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &fuel[i][0], &fuel[i][1], &fuel[i][2]);
        sum_fuel1 += fuel[i][0];
        sum_fuel2 += fuel[i][1];
        sum_fuel3 += fuel[i][2];
    }
    // printf("%lf %lf %lf\n", sum_fuel1, sum_fuel2, sum_fuel3);
    double sep[3];
    for (int i = 0 ;i < 3; i++) {
        if (equal_name(name[i], "Nano") == 1) {
            sep[i] = 6.6;
        }
        if (equal_name(name[i], "Toh") == 1) {
            sep[i] = 5.5;
        }
        if (equal_name(name[i], "Mickey") == 1) {
            sep[i] = 5.5;
        }
    }
    printf("%s: %.0lf refills\n", name[0], (ceil(sum_fuel1 / sep[0])));
    printf("%s: %.0lf refills\n", name[1], (ceil(sum_fuel2 / sep[1])));
    printf("%s: %.0lf refills\n", name[2], (ceil(sum_fuel3 / sep[2])));
    return 0;
}