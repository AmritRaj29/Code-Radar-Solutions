#include <stdio.h>
int main(){
    int rows;
    int cols;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= cols; j++){
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