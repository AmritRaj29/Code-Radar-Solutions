#include <stdio.h>


int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    //perform bitwise OR operation
    int result = num1 | num2;
    printf("%d\n", result);
    return 0;
}