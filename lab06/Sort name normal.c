#include <stdio.h>
int cmp(char Arr1[], char Arr2[]) {
    //  Arr1 Walker < Arr2 Curent : T
    int i = 0;
    while (Arr1[i] != '\0' && Arr2[i] != '\0') {
        if (Arr1[i] != Arr2[i]) {
            if (Arr1[i] < Arr2[i]) return 1;
            else return 0;
        }
        i++;
    }
    return 0;
}

int copy(char Arr1[], char Arr2[]) {
    // Arr1 copy -> Arr2
    int i = 0;
    while (Arr2[i] != '\0') {
        Arr1[i] = Arr2[i];
        i++;
    }
    Arr1[i] = '\0';
}

int main() {
    char name[20][61];
    for (int i = 0; i < 20; i++)
        scanf(" %60[^\n]", name[i]);

    for (int i = 0; i < 20; i++) {
        for (int j = 0; name[i][j] != '\0'; j++)  {
            if (j == 0 || name[i][j - 1] == ' ') {
                if (name[i][j] >= 'a' && name[i][j] <= 'z') {
                    name[i][j] -= 32;
                }
            } else {
                if (name[i][j] >= 'A' && name[i][j] <= 'Z') {
                    name[i][j] += 32;
                }
            }
        }
    }
    for (int current = 0; current < 20; current++) {
        int smallest = current;
        for (int walker = current + 1; walker < 20; walker++) {
            if (cmp(name[walker], name[smallest]) == 1) {
                smallest = walker;
            }
        }
        if (current != smallest) {
            char temp[61];
            copy(temp, name[current]);
            copy(name[current], name[smallest]);
            copy(name[smallest], temp);
        }
    }
    // printf("\n-----------------------------\n");
    for (int i = 0; i < 20; i++)
        printf("%s%s", i ? "\n" : "", name[i]);
    return 0;
}