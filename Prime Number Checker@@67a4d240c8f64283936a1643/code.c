// Your code here...
#include <math.h>

void isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t, num;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}