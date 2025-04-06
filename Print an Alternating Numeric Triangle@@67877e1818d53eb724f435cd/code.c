// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j;
    int num;  // Variable to hold alternating numbers
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {       // Loop for rows
        num = i % 2;                   // Start with `1` for odd rows, `0` for even rows
        for (j = 1; j <= i; j++) {     // Loop for numbers in each row
            printf("%d ", num);         // Print the alternating number
            num = 1 - num;              // Alternate between 1 and 0
        }
        printf("\n");                   // New line after each row
    }

    return 0;
}