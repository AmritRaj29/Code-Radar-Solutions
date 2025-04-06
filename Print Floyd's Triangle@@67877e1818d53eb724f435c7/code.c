// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, num = 1;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {         // Loop for rows
        for (j = 1; j <= i; j++) {        // Loop for columns
            printf("%d ", num);           // Print the current number
            num++;                        // Increment the number
        }
        printf("\n");                     // New line after each row
    }

    return 0;
}