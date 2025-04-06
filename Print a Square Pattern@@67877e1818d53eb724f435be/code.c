// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {       // Loop for rows
        for (j = 1; j <= rows; j++) {   // Loop for columns
            printf("* ");                // Print stars
        }
        printf("\n");                   // New line after each row
    }
    return 0;
}