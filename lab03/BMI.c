#include <stdio.h>

int main() {
    float h, w;
    scanf("%f", &h);
    scanf("%f", &w);

    float m = h / 100;
    float bmi = w / (m * m);

    printf("%f", bmi);
    return 0;
}