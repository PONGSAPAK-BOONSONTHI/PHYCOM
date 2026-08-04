#include <stdio.h>

int main() {
    char info[41];
    int g1, g2, g3, g4, g5, g6;
    scanf(" %40[^\n]", info);
    scanf("%d %d %d %d %d %d", &g1, &g2, &g3, &g4, &g5, &g6);

    double GPA = (g1 + g2 + g3 + g4 + g5 + g6) / 6.0;

    printf("Grade announcement 1/2568: %s\n", info);
    printf("GPS/GPA: %.2lf", GPA);
    return 0;
}