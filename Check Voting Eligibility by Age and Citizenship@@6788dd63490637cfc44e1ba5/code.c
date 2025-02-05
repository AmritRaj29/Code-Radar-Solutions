#include <stdio.h>


int main() {
    int age, citizenStatus;
    scanf("%d %d", &age, &citizenStatus);
    if(age >= 18 && citizenStatus == 1){
        printf("Eligible\n");
    }else{
        printf("Not Eligible\n");
    }
    return 0;
}