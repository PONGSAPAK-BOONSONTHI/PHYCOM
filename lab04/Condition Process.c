#include <stdio.h>

int main() {
    int input1, input2;

    scanf("%d %d", &input1, &input2);

    if (input1 == input2) {
        printf("%d + %d = %d", input1, input2, input1 + input2);
    } else {
        printf("%d - %d = %d", input1, input2, input1 - input2);
    }
    return 0;
}