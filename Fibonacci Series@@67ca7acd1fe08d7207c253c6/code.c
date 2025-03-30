#include <stdio.h>

int fibonacciSeries(int n);
int main() {
    int n;
    printf("%d", n);
    fibonacciSeries(n);
    return 0;
}
int fibonacciSeries(int n){
    int f=0, s=1, next;
    for (int i = 0; i<n; i++){
        printf("%d", f);
        next = f+s;
        f=s;
        s=next;
    }
    printf("\n");
    return 0;
}