#include <stdio.h>



int main() {
    int num, bitposition;
    scanf("%d %d", &num, &bitposition);
    int mask = ~(1 << bitposition);
    int result = num & mask;
    printf("%d\n", result);
    return 0;
}