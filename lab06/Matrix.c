#include <stdio.h>

int main() {
    double M1[3][3], M2[3][3];
    scanf("%lf %lf %lf", &M1[0][0], &M1[0][1], &M1[0][2]);
    scanf("%lf %lf %lf", &M1[1][0], &M1[1][1], &M1[1][2]);
    scanf("%lf %lf %lf", &M1[2][0], &M1[2][1], &M1[2][2]);
    scanf("%lf %lf %lf", &M2[0][0], &M2[0][1], &M2[0][2]);
    scanf("%lf %lf %lf", &M2[1][0], &M2[1][1], &M2[1][2]);
    scanf("%lf %lf %lf", &M2[2][0], &M2[2][1], &M2[2][2]);
    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            double result = 0;
            for (int k = 0; k < 3; k++) {
                result += M1[i][k] * M2[k][j];
            }
            printf("%.2lf ", result);
        }
        printf("\n");
    }
    return 0;
}