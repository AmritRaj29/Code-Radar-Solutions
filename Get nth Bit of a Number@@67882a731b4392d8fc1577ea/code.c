#include <stdio.h>



int main() {
    int num , n;
    scanf("%d %d", &num,&n);
    int shifted = num >> n;
    int nthBit = shifted & 1;
    printf("%d\n" nthBit);
    return 0;
}