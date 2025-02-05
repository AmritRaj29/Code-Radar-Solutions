#include <stdio.h>



int main() {
    int num;
    scanf("%d", &num);
    if(num<=0){
        printf("Freezing\n");
    }else{
        printf("Above Freezing\n");
    }
    return 0;
}