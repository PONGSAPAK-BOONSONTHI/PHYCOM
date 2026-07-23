#include <stdio.h>

int main() {
    int x;
    float y;
    char c;

    scanf("%d", &x);
    scanf("%f", &y);
    scanf(" %c", &c);

    // float xf = (float) x;
    // int yi = (int) y;
    printf("%.3f\n", (float) x);
    printf("%d\n", (int) y);
    printf("%d\n", (int) c);
    return 0;
}