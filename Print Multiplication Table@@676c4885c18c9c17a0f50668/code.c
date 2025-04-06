// Your code here...
#include <stdio.h>

int main() {
    int i, j;

    

    for (i = 1; i <= 10; i++) {         // Loop through rows (numbers 1 to 10)
        for (j = 1; j <= 10; j++) {     // Loop through columns (multiplier 1 to 10)
            printf("%4d", i * j);       // Print product, formatted for alignment
        }
        printf("\n");                   // Move to the next row
    }

    return 0;
}