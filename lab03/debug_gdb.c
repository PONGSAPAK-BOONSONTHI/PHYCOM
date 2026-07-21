// gcc -g debug_gdb -o debug_gdb
#include <stdio.h>

int main() {
    int a = 17, b = 25, c = 50, d = 10;
    d = b % a + c / b; 								
    d = b % a++ + c / b; 								
    d = b % ++a + c / b; 								
    d = b % (a + c) / b;
    return 0;
}