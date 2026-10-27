#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[61];
    double score;
};

int cmp_score(const void *a1, const void *a2) {
    const struct Student *x1 = (struct Student *) a1;
    const struct Student *x2 = (struct Student *) a2;
    if (x1->score > x2->score) return 1;
    if (x1->score < x2->score) return -1;
    return 0;
}

int cmp_name(const void *a1, const void *a2) {
    const struct Student *x1 = (struct Student *) a1;
    const struct Student *x2 = (struct Student *) a2;
    int i = 0;
    while (x1->name[i] != '\0' && x2->name[i] != '\0') {
        if (x1->name[i] != x2->name[i]) return x1->name[i] - x2->name[i];
        i++;
    }
    return x1->name[i] - x2->name[i];
    
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student arrStd[n];
    for (int i = 0; i < n; i++) scanf(" %60s %lf", arrStd[i].name, &arrStd[i].score);
    for (int i = 0; i < n; i++) printf("name: %s | score: %.2lf\n", arrStd[i].name, arrStd[i].score);
    qsort(arrStd, n, sizeof(struct Student), cmp_name);
    printf("-------------------------\n");
    for (int i = 0; i < n; i++) printf("name: %s | score: %.2lf\n", arrStd[i].name, arrStd[i].score);
    return 0;
}
