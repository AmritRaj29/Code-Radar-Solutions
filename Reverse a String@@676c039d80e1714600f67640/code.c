#include <stdio.h>
void reverseString(char *str){
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len -1; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main(){
    char str[100];
    reverseString(str);
    printf("%s\n", str);
    return 0;
}