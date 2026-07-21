#include <stdio.h>

int main() {
    int d, h, m, s, ss;
    scanf("%d", &ss);
    s = ss;
    d = s / 86400;
    s = s % 86400;

    h = s / 3600;
    s = s % 3600;

    m = s / 60;
    s = s % 60;
    
    printf("%d s = %d d %d h %d m %d s", ss, d, h ,m, s);
    return 0;
}