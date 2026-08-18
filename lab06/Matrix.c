#include <stdio.h>

int main() {
    double M1[3][3], M2[3][3];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%lf", &M1[i][j]);
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%lf", &M2[i][j]);
    
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