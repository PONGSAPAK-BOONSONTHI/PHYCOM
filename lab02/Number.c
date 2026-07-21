#include <stdio.h>

int main(){
    char number[6];

    scanf("%s", number);
    printf("%s%.2s",number + 2, number);
    return 0;
}
