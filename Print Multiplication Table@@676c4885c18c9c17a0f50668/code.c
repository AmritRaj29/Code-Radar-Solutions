// Your code here...
#include <stdio.h>

int main() {
    int n, i;

    
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {               // Loop from 1 to 10
        printf("%d x %d = %d\n", n, i, n * i); // Print in "n x i = result" format
    }

    return 0;
}