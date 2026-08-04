#include <stdio.h>

int main() {
    int quacks;
    scanf("%d", &quacks);
    if (quacks < 0) {
        printf("Error");
        return 0;
    }
    if (quacks > 50) {
        printf("Duck Type: Talkative Duck");
    } else if (quacks >= 11) {
        printf("Duck Type: Happy Duck");
    } else if (quacks >= 1) {
        printf("Duck Type: Chill Duck");
    } else {
        printf("Duck Type: Silent Duck");
    }
    return 0;
}