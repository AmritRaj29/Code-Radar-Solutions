
#include <stdio.h>

void fibonacciSeries(int n) {
    int f = 0, s = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", f);
        next = f + s;
        f = s;
        s = next;
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    fibonacciSeries(n);

    return 0;
}