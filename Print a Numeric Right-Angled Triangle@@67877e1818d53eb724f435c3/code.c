// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {         // Loop for rows
        for (j = 1; j <= i; j++) {        // Loop for numbers
            printf("%d", j);              // Print the current number
        }
        printf("\n");                     // New line after each row
    }
    return 0;
}