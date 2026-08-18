#include <stdio.h>

int main() {
    unsigned int arr[5], index;
    for (int i = 0; i < 5; i++) scanf("%u", &arr[i]);
    scanf("%d", &index);
    printf("Value at index %d is %u", index, arr[index]);
    return 0;
}