// Struct Info Book
#include <stdio.h>
#include <string.h>

struct student_info {
    char name[100];
    char surname[100];
    int age;
    char sex[10];
    char id[20];
    float gpa;
};

int main() {
    struct student_info std_info;
    scanf("%s %s %s %d %s %f", std_info.name, std_info.surname, std_info.sex, &std_info.age, std_info.id, &std_info.gpa);

    if (strcmp(std_info.sex, "Male") == 0) {
        printf("Mr ");
    } else if ((strcmp(std_info.sex, "Female") == 0)) {
        printf("Miss ");
    }

    printf("%c %s (%d) ID: %s GPA %.2f\n", std_info.name[0], std_info.surname, std_info.age, std_info.id, std_info.gpa);

    return 0;
}
