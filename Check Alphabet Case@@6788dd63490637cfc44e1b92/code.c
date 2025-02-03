#include <stdio.h>



int main() {
    char word;
    scanf("%c", &word);
    if(word >=65 && word <=98){
        printf("Uppercase\n");
    }else{
        printf("Lowercase\n");
    }
    return 0;
}