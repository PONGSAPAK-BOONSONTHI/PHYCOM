#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char *) malloc(101 * sizeof(char));
    scanf("%[^\n]s", str);
    
    char *start = str;
    char *end = str;

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
    printf("%s\n", str);

    free(str);
    str = NULL;
    
    return 0;
}