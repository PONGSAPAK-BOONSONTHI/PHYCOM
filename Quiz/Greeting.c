#include <stdio.h>

int main() {
    char name[201];

    scanf(" %200[^\n]", name);

    printf("Hello, %s!", name);
    return 0;
}