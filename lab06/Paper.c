#include <stdio.h>

int to_num(char str[]) {
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        }
    }
    return num;
}

int main() {
    char X[3], Y[3];
    scanf("%s", X);
    scanf("%s", Y);
    int s_X = to_num(X);
    int s_Y = to_num(Y);
    int gap = s_Y - s_X;
    // printf("%d\n", gap);
    int result = 2;
    for (int i = 0; i < gap - 1; i++) {
        result *= 2;
    }
    if (gap != 0) {
        printf("%d", result);
    } else {
        printf("1");
    }
    return 0;
}