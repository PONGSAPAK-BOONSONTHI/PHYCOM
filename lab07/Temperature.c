#include <stdio.h>
double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    char tem;
    double val;
    scanf("%lf %c", &val, &tem);
    if (tem == 'C' || tem == 'c') {
        printFarenheit(celsiusToFahrenheit(val));
    } else {
        printCelcius(fahrenheitToCelcius(val));
    }
    return 0;
}
double celsiusToFahrenheit(double celcius) {
    return 32 + (celcius * (9.0/5.0));
}
double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * (5.0/9.0) ;
}
void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}
void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}

