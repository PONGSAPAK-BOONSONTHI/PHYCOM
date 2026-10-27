#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compar(const void *a, const void *b) {
    double x1 = *(const double *)a;
    double x2 = *(const double *)b;

    if (x1 < x2) return -1;
    if (x1 > x2) return 1;
    return 0;
}

int main() {
    unsigned int n;
    scanf("%d", &n);
    double setval[n], sum = 0, art, m, sd;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &setval[i]);
        sum += setval[i];
    }
    art = sum / n;
    qsort(setval, n, sizeof(double), compar);
    // for (int i = 0; i < n; i++) printf("%.1lf ", setval[i]);
    if (n % 2 != 0) {
        m = setval[n / 2];
    } else {
        m = (setval[(n / 2) - 1] + setval[n / 2]) / 2;
    }
    double sum_ = 0;
    for (int i = 0; i < n; i++) {
        sum_ += pow((setval[i] - art), 2);
    }
    sd = sqrt(sum_ / n);

    printf("%.2lf\n", art);
    printf("%.2lf\n", m);
    printf("%.2lf\n", sd);
    return 0;
}