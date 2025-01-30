#include <stdio.h>

int main() {
    int num;
    
    scan("%d", &num);

    printf("Hexadecimal: %c\n", num);
    printf("Octal: %d\n", num);
    return 0;
}