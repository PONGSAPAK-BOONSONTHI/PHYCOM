#include <stdio.h>
int fi(int a){
    if (a == 1)
        return 1;
    if (a == 2)
        return 2;
    return fi(a - 1) + fi(a - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("method = %d", fi(n));
    return 0;
}