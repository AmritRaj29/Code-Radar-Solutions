// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, num;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {         // Loop for rows
        // Print spaces for alignment
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print the left half of the palindrome
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print the right half of the palindrome
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");                     // Move to the next row
    }

    return 0;
}