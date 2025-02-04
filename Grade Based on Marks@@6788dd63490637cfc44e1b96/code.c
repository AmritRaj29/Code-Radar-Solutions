#include <stdio.h>



int main() {
    char marks;
    scanf("%c", &marks);
    if(marks >=90){
        printf("A\n");
    }else if(marks >=80 and <90){
        printf("B\n");
    }else if(marks >=70 and <80){
        printf("C\n");
    }else if(marks >=60 and <70){
        printf("D\n");
    }else{
        printf("F\n");
    }
   
    return 0;
}