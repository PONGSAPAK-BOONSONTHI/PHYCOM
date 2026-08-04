#include <stdio.h>

int main() {
    int age, h, w; 
    int con_1 = 0, con_2 = 0, con_3 = 0, con_4 = 0;
    int ave_age = 0, ave_h = 0, ave_w = 0;
    for (int i = 0; i < 50; i++) {
        scanf("%d %d %d", &age, &h, &w);
        if (age >= 20 && h >= 160) con_1++;
        if (age < 20 && (h <= 180 || w >= 60)) con_2++;
        if (age >= 30 && (w >= 40 && w <= 80)) con_3++;
        if (age < 40 && (w < 85 || h <= 200)) con_4++;
        ave_age += age;
        ave_h += h;
        ave_w += w;
    }
    printf("Age >= 20 and Height >= 160: %d\n", con_1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", con_2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", con_3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", con_4);
    printf("Average Age: %d\n", ave_age / 50);
    printf("Average Height: %.2f\n", ave_h / 50.0);
    printf("Average Weight: %.2f\n", ave_w / 50.0);
    return 0;
}