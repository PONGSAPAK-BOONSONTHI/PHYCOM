#include <stdio.h>

int main() {
    char fName[21], lName[21], name[21], idstd[9];

    scanf("%20s %20s", fName, lName);
    scanf("%20s", name);
    scanf("%8s", idstd);

    printf("Hello World, my name is %s (%s)\n\n", name, fName);
    printf("Student ID: %s\n", idstd);
    printf("Name: %s %s\n", fName, lName);
    printf("Nickname: %s\n", name);
    return 0;
}