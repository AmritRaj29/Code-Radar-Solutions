#include <stdio.h>



int main() {
    char word;
    scanf("%c", &word);
    if(word >=65 && word <=98){
        printf("Uppercase\n");
    }else if(word >=97 && word <=122){
        printf("Lowercase\n");
    }else{
        printf("Not an alphabet\n");
    }
    return 0;
}