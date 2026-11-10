// String Pretty
#include <stdio.h>
#include <string.h>

void print_line(char *text, int n) {
    int len = strlen(text);
    int line = n - len - 2;
    int r = line / 2;
    int l = line - r;

    printf("*");
    for (int i = 0; i < l; i++) printf(" ");
    printf("%s", text);
    for (int i = 0; i < r; i++) printf(" ");
    printf("*\n");
}

int main() {
    int n;
    char text1[51], text2[41];

    scanf("%d", &n);
    scanf(" %50[^\n]", text1);
    scanf(" %40[^\n]", text2);

    for (int i = 0; i < n; i++) printf("*");
    printf("\n");

    print_line(text1, n);
    print_line(text2, n);
    
    for (int i = 0; i < n; i++) printf("*");
    printf("\n");

    return 0;
}