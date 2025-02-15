#include <stdio.h>
int main(){
    int rows = 5;
    int cols = 9;

    for(i = 1; i <= rows; i++){
        for(j = 1; j <= cols; j++){
            if(j<=i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;

}