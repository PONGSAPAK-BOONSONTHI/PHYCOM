#include <stdio.h>

int main() {
    char fName[31], lName[31];
    char id[9];
    int D, M, Y;
    float GPA;
    scanf("%s", fName);
    scanf("%s", lName);
    scanf("%s", id);
    scanf("%d/%d/%d",&D ,&M ,&Y);
    scanf("%f", &GPA);

    printf("Fullname: %s %s\n",fName, lName);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n",D ,M ,Y);
    printf("GPA: %.2f\n", GPA);

    return 0;
}