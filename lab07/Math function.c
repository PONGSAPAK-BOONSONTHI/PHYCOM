#include <stdio.h>
double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double fiudMin(double arr[], int size) {
    double min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double fiudMax(double arr[], int size) {
    double max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;    
}

double fiudAvg(double arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum / size;
}

int main() {
    int n;
    scanf("%d", &n);
    double arr[n];
    for (int i = 0; i < n; i++) arr[i] = getValue();

    double min, max, avg;
    min = fiudMin(arr, n);
    max = fiudMax(arr, n);
    avg = fiudAvg(arr, n);

    printf("%d Values\n", n);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.3lf\n", avg);
    return 0;
}