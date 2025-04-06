// Your code here...
#include <stdio.h>

int main() {
    int rows, space, i, j;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {        // Loop for each row
        for (space = 1; space <= rows - i; space++) {
            printf(" ");                // Print spaces
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");                // Print stars
        }
        printf("\n");                   // New line after each row
    }
    return 0;
}