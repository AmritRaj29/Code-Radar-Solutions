// Your code here...
#include <stdio.h>

int main() {
    int i, j;

    

    for (i = 1; i <= 10; i++) {         // Loop for rows (numbers 1 to 10)
        for (j = 1; j <= 10; j++) {     // Loop for columns (multiplier 1 to 10)
            printf("%d x %d = %d\n", i, j, i * j); // Print product in the desired format
        }
        printf("\n");                   // Blank line for separation between tables
    }

    return 0;
}