#include <stdio.h>



int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1==num2==num3){
        printf("Equilateral\n");
    }else if(num1==num2!=num3){
        printf("Isosceles\n");
    }else{
        printf("Scalene\n");
    }
    
    return 0;
}