// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    int count = 0;
    int i;
    scanf(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (i = 0; str[i] != '\0'; i++){
        char currentChar = tolower(str[i]);
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u'){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}