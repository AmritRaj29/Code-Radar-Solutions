#include <stdio.h>



int main() {
    int num, count = 0;
    scanf("%d", &num);
    while(num>0){
        if (num % 2 == 0){
            count++;
            num /= 2;
        }else{
            break;
        }
    
    }
    printf("%d", count);
    
    return 0;
}