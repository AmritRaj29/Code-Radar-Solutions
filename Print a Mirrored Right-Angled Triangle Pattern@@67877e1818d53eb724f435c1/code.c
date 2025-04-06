// Your code here...
#include <stdio.h>
int main() {
    int rows, i, j;
    scanf("%d", &rows);
    for (i = 1; i >= rows; i++) {  // Loop for rows (decreasing)
        for (j = 1; j <= i; j++) { // Loop for printing stars
            printf(" *");
        }
        printf("\n"); // New line after each row
    }
    return 0;
}