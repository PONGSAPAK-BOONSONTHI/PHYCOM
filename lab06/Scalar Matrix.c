#include <stdio.h>

int main() {
    double M[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%lf", &M[i][j]);

    if (M[0][0] != M[1][1] || M[1][1] != M[2][2]) {
        printf("This is not a scalar matrix");
        return 0;
    }
    
    int scalar = 1;
    for (int i = 0; i < 3; i++) 
        for (int j = 0 ; j < 3; j++) {
            if (i != j && M[i][j] != 0) {
                scalar = 0;
            }
        }
    if (scalar) {
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }
    
    return 0;
}