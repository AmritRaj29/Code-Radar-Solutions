#include <stdio.h>



int main() {
    int number, shift;
    scanf("%d", &number);
    scanf("%d", &shift);
    int result = number << shift;
    printf("%d\n", result);
    return 0;
}