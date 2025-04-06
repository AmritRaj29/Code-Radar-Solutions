// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, space, num;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {           // Loop for rows
        for (space = 1; space <= rows - i; space++) {
            printf(" ");                    // Print spaces for alignment
        }
        num = 1;                            // Initialize number for each row
        for (j = 1; j <= i; j++) {
            printf("%d ", num);             // Print the current number
            num++;                          // Increment the number
        }
        printf("\n");                       // New line after each row
    }

    return 0;
}