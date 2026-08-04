#include <stdio.h>

int main() {
    float bal, cash;
    scanf("%f", &bal);
    scanf("%f", &cash);
    char mode;
    float value;
    int err = 0;
    while (1) {
        if (err >= 3) break;
        scanf(" %c %f",&mode,&value);
        if (mode == 'E') break;
        if (mode == 'D' || mode == 'W') {
            if (mode == 'D') {
                if (cash >= value) {
                    cash -= value;
                    bal += value;
                    err = 0;
                } else {
                    err++;
                    // printf("err %d", err);
                }
            } else if (mode = 'W') {
                if (bal >= value) {
                    bal -= value;
                    cash += value;
                    err = 0;
                } else {
                    err++;
                    // printf("err %d", err);
                }
            }
        } else {
            err++;
            // printf("err %d", err);
        }
    }
    printf("%.2f\n", bal);
    printf("%.2f\n", cash);
    return 0;
}