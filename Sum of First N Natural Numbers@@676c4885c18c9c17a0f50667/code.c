// Your code here...
#include <stdio.h>

int main() {
    int n, sum;
    
    scanf("%d", &n);

    // Calculate the sum using the formula
    sum = (n * (n + 1)) / 2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}