#include <stdio.h>

int main() {
    unsigned int arr[5], index;    
    scanf("%u %u %u %u %u", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    scanf("%d", &index);
    printf("Value at index %d is %u", index, arr[index]);
    return 0;
}