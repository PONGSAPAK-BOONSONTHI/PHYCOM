#include <stdio.h>

int main() {
    char fname1[30], sname1[30];
    char person2[30];
    char person3[30];

    scanf("%s\n", fname1);
    scanf("%s", sname1);
    scanf(" %29[^\n]", person2);
    scanf(" %29[^\n]", person3);

    printf("Person 1: %s %s\n",fname1, sname1);
    printf("Person 2: %s\n",person2);
    printf("Person 3: %s\n",person3);

    return 0;
}