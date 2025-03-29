// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]){
    int len = strlen(str);
    int i,j;
    for ( i = 0, j = len - 1; i < j; i++, j--){
        if (tolower(str[i]) != tolower(str[j])) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[100];
    scanf("%99s\n", str);
    if (isPalindrome(str)){
        printf("Yes\n");
    }else {
        printf("No\n");
    }
    return 0;
}