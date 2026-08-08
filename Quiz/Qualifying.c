#include <stdio.h>

int main() {
    double val[3];
    char car[3][36];
    scanf("%lf %35[^\n]", &val[0], car[0]);
    scanf("%lf %35[^\n]", &val[1], car[1]);
    scanf("%lf %35[^\n]", &val[2], car[2]);

    double min = val[0];
    int index = 0;
    for (int i = 0; i < 3; i++) {
        if (val[i] < min) {
            min = val[i];
            index = i;
        }
    }

    printf("%s is Fastest : %.3lf", car[index], val[index]);
    return 0;
}