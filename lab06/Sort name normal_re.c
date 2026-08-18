#include <stdio.h>
int upper(char mas[]) {
    int gap;
    for (int i = 0; mas[i] != '\0'; i++) {
        if (mas[i] >= 'A' && mas[i] <= 'Z') mas[i] += 32;
        if (mas[i] == ' ') gap = i;
    }
    mas[0] -= 32;
    mas[gap + 1] -= 32;
}

int cmp(char Arr1[], char Arr2[]) {
    // arr1 == arr2 : ? = 1
    int i = 0;
    while (Arr1[i] != '\0' && Arr2[i] != '\0') {
        if (Arr1[i] != Arr2[i]) {
            return Arr1[i] < Arr2[i];
        }
        i++;
    }
    return Arr1[i] == '\0' && Arr2[i] != '\0';
}

int copy(char Arr1[], char Arr2[]) {
    // Arr1 copy Arr2
    int i = 0;
    while (Arr2[i] != '\0') {
        Arr1[i] = Arr2[i];
        i++;
    }
    Arr1[i] = '\0';    
}

int sortName(char Arr[20][61]) {
    for (int c = 0; c < 20; c++) {
        int sm = c;
        for (int wk = c + 1; wk < 20; wk++) {
            if (cmp(Arr[wk], Arr[sm]) == 1) {
                sm = wk;
            }
        }
        if (sm != c) {
            char temp[61];
            copy(temp, Arr[c]);
            copy(Arr[c], Arr[sm]);
            copy(Arr[sm], temp);
        }
    }
}

int main() {
    char Arr_name[20][61];
    for (int i = 0; i < 20; i++) scanf(" %60[^\n]", Arr_name[i]);
    for (int i = 0; i < 20; i++) upper(Arr_name[i]);
    sortName(Arr_name);
    for (int i = 0; i < 20; i++) printf("%s\n", Arr_name[i]);
    return 0;
}