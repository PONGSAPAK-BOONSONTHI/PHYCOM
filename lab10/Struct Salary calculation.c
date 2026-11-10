// Struct Salary calculation
#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    float salary;
    float sales;
};

int main() {
    struct Record rc[100];

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f %f", rc[i].id, rc[i].name, &rc[i].salary, &rc[i].sales);
    }

    char s_id[10];
    scanf("%s", s_id);

    int search = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(s_id, rc[i].id) == 0) {
            search = i;
            break;
        }
    }

    if (search != -1) {
        printf("%s\n", rc[search].id);
        printf("%s\n", rc[search].name);
        printf("%.0f\n", rc[search].sales);
        printf("%.2f\n", rc[search].sales * 0.02);
        printf("%.0f\n", rc[search].salary);
        printf("%.2f\n", rc[search].salary + (rc[search].sales * 0.02));
    } else {
        printf("ID not found !!!\n");
    }

    return 0;
}