#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("Vowel\n");
        } else if(ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch =='g' || ch =='h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z') 
            printf("Consonant\n");
         else if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch =='4' || ch=='5' || ch=='6' || ch=='7' || ch=='8' || ch=='9')
            printf("Digit\n");
         else 
            printf("Special Character\n");
        
    
    return 0;
}