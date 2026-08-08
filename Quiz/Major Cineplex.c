#include <stdio.h>

int main() {
    int age, day;
    scanf("%d", &age);
    scanf("%d", &day);

    int result = 0;
    if (day == 4) {
        result = 100;
    } else {
        if (age >= 60) {
            result = 140;
        } else if (age >= 13) {
            result = 220;
        } else {
            result = 120;
        }
        if (day == 1 || day == 7) {
            result += 20;;
        }
    }
    printf("Ticket price: %d Baht", result);
    return 0;
}