#include <stdio.h>
#include <stdlib.h>
int cpm(const void *a, const void *b) {
    const double x1 = *(const double *) a;
    const double x2 = *(const double *) b;
    if (x1 > x2) return 1;
    if (x1 < x2) return -1;
    return 0;
}


int main() {
    int n; scanf("%d", &n);
    double arr[n];
    for (int i = 0 ; i < n; i++) scanf("%lf", &arr[i]);
    qsort(arr, n, sizeof(double), cpm);
    for (int i = 0 ; i < n; i++) printf("%.3lf ", arr[i]);
    return 0;
}