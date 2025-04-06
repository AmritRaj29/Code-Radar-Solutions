// Your code here...
#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {           // Loop from 1 to n
        printf("%d ", i);                // Print each number followed by a space
    }

    printf("\n");                        // New line after all numbers
    return 0;
}