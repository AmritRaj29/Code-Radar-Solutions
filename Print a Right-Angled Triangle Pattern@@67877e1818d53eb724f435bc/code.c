#include <stdio.h>
int main(){
    int rows;
    int cols;
    int i;
    int j;
    scanf("%d %d", &rows, &cols);

    for(i = 1; i <= rows; i++){
        for(j = 1; j <= cols; j++){
            
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;

}