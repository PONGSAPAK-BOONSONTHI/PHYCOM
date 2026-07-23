#include <stdio.h>

int main() {
    double input1, input2, input3, mid;

    scanf("%lf %lf %lf", &input1, &input2, &input3);

    if ((input1 <= input2 && input1 >= input3) || (input1 >= input2 && input1 <= input3)) {
        mid = input1;
    }
    if ((input2 <= input1 && input2 >= input3) || (input2 >= input1 && input2 <= input3)) {
        mid = input2;
    }
    if ((input3 <= input2 && input3 >= input1) || (input3 >= input2 && input3 <= input1)) {
        mid = input3;
    }

    printf("%.2lf", mid);
    return 0;
}