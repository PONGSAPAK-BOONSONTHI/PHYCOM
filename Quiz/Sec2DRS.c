#include <stdio.h>

int main() {
    int safe, lap, sc, ch;
    float gap;
    scanf("%d", &safe);
    scanf("%f", &gap);
    scanf("%d", &lap);
    scanf("%d", &sc);    

    if (safe != 1) ch++;
    if (gap >= 1) ch++;
    if (lap <= 2) ch++;
    if (lap - sc < 2) ch++;

    if (ch == 0) {
        printf("DRS allowed");
    } else {
        printf("DRS not allowed %d", ch);
    }
    return 0;
}