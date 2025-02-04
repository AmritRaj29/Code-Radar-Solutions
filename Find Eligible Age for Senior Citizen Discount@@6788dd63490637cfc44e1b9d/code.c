#include <stdio.h>



int main() {
    int num;
    scanf("%d", &num);
    if(num>=60){
        printf("Eligible\n");
    }else{
        printf("Not Eligible\n");
    }
    return 0;
}