#include <stdio.h>

int main() {
    double input1, input2, input3;
    scanf("%lf", &input1);
    scanf("%lf", &input2);
    scanf("%lf", &input3);

    printf("%.4lf\n", input1);
    printf("%.4lf\n", input2);
    printf("%.2lf\n", input3);
    return 0;
}