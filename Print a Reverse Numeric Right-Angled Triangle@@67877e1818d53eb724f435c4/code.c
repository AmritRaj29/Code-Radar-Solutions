// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j;
    
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {         // Loop for rows (reverse order)
        for (j = 1; j <= i; j++) {        // Loop for numbers
            printf("%d ", j);             // Print the number with a space
        }
        printf("\n");                     // New line after each row
    }
    return 0;
}