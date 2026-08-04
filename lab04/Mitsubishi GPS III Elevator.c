#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    double t_accel_decel = 6;
    double s_accel = 2.25;
    double s_total, d;

    if (start - end < 0) {
        d += -1 * (start - end);
    } else {
        d += (start - end);
    }

    if (start == 2 && end == 1){
        d += 6;
    }

    if (start == 2 && end == 1) {
        s_total = 6;
    } else if (start == 1) {
        s_total = ((d - 1) * 4) + 6;
    } else {
        s_total = d * 4;
    }

    double s_cruise = s_total - (2 * s_accel);
    double t_cruise = s_cruise / 1.5;

    printf("%.2lf", t_cruise + t_accel_decel);
}