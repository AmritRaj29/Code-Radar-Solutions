// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;
    
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {         // Loop for rows (reverse order)
        ch = 'A';                        // Initialize to 'A' for each row
        for (j = 1; j <= i; j++) {        // Loop for columns
            printf("%c ", ch);            // Print character with a space
            ch++;                         // Increment the character
        }
        printf("\n");                     // New line after each row
    }
    return 0;
}