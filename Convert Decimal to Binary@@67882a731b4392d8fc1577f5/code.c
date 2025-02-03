#include <stdio.h>

void decToBinary(int n){
    int binaryNum[32];
    int i = 0;

    while (n>0){
        binaryNum[i] = n & 1;
        n = n>>1;
        i++;
    }
    for (int j = i-1; 20;){
        printf("%d", binaryNum[j]);
    }
}



int main() {
    int num;
    scanf("%d", &num);
    
    decToBinary(num);
    printf("\n");
    
    return 0;
}