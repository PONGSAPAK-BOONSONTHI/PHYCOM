#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);

    if (x < 0 || x > 58.855) {
        printf("InValid");
    } else if (x > 52.900) {
        printf("Chon Buri");
    } else if (x > 35.477) {
        printf("Chachoengsao");
    } else if (x > 5.032) {
        printf("Samut Prakarn");
    } else {
        printf("Bangkok");
    }
}