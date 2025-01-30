#include <stdio.h>

int main() {
    int num;
    
    scan("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %O\n", num);
    return 0;
}