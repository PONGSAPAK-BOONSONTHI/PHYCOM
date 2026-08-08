#include <stdio.h>
int sum(int Arr[]) {
    double sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += Arr[i];
    }
    return sum;
}

int compare(int Arr1[], int Arr2[]) {
    // Arr1 < Arr2 ?
    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (Arr1[i] < Arr2[i]) count++;
    }
    return count;
}

int equal(int Arr1[], int Arr2[]) {
    // Arr1 == Arr2 ?
    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (Arr1[i] == Arr2[i]) count++;
    }
    return count;
}

int main() {
    char car1[51], car2[51];
    int days_car1[7], days_car2[7], cpm_car1, cpm_car2, Equ;
    int sum_day_car1, sum_day_car2;
    scanf(" %50[^\n]", car1);
    for (int i = 0; i < 7; i++) scanf("%d", &days_car1[i]);
    scanf(" %50[^\n]", car2);
    for (int i = 0; i < 7; i++) scanf("%d", &days_car2[i]);

    sum_day_car1 = sum(days_car1);
    sum_day_car2 = sum(days_car2);
    cpm_car1 = compare(days_car1, days_car2);
    cpm_car2 = compare(days_car2, days_car1);
    Equ = equal(days_car1, days_car2);
    printf("%s: %d minutes, average %d minutes/day\n", car1, sum_day_car1, sum_day_car1/7);
    printf("%s: %d minutes, average %d minutes/day\n", car2, sum_day_car2, sum_day_car2/7);
    printf("Faster days - %s: %d, %s: %d, Equal: %d", car1, cpm_car1, car2, cpm_car2, Equ);
    

    return 0;
}