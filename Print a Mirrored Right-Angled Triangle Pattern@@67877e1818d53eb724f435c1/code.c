#include <stdio.h>

int main() {
    int rows, i, j, space;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {           // Loop for rows
        for (space = 1; space <= rows - i; space++) {
            printf(" ");                    // Print spaces for alignment
        }
        for (j = 1; j <= i; j++) {
            printf("*");                    // Print stars
        }
        printf("\n");                       // New line after each row
    }
    return 0;
}