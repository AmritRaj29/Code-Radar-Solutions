// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, space;
    char ch;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {           // Loop for each row
        
        ch = 'A';                           // Initialize to 'A' for each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);              // Print characters with a space
            ch++;                           // Increment character
        }
        printf("\n");                       // New line after each row
    }

    return 0;
}