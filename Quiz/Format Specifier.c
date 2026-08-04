#include <stdio.h>

int main() {
    int input1;
    float input2;
    char input3;
    char input4[21];

    scanf("%d", &input1);
    scanf("%f", &input2);
    scanf(" %c", &input3);
    scanf("%20s", input4);

    printf("Integer: %d\n", input1);
    printf("Float: %.3f\n", input2);
    printf("Character: %c\n", input3);
    printf("String: %s\n", input4);
    return 0;
}