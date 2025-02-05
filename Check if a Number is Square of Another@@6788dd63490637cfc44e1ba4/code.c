#include <stdio.h>
#include <math.h>



int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1 == pow(num2,2)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}