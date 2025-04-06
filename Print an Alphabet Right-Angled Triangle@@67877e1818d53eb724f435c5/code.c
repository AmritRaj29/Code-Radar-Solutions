// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {         // Loop for rows
        ch = 'A';                        // Initialize the character to 'A'
        for (j = 1; j <= i; j++) {        // Loop for columns
            printf("%c ", ch);            // Print the character with a space
            ch++;                         // Increment the character
        }
        printf("\n");                     // New line after each row
    }
    return 0;
}