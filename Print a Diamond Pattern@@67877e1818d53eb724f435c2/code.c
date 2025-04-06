// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, space;
    
    scanf("%d", &rows);

    // Upper triangle
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");                // Print spaces for alignment
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");                // Print stars
        }
        printf("\n");
    }

    // Lower triangle
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");                // Print spaces for alignment
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");                // Print stars
        }
        printf("\n");
    }

    return 0;
}