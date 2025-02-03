#include <stdio.h>



int main() {
    int num;
    scanf("%d", &num);
    if(num>0){
        printf("Positive\n");
    }elif(num<0){
        printf("Zero\n");
    }else{
        printf("Negative\n");
    }
    return 0;
}