#include <stdio.h>
int main() {
    int n,i;
    int f = 0, s = 1, next;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    if (n==1) {
        printf("0\n");
        return 0;

    }
    if (n==2) {
        printf("0 1\n");
        return 0;
    }
    printf("0 1");
    for (i = 3; i <=n ; i++){
        next = f + s;
        printf("%d", next);
        f = s;
        s = next;
    }
    printf("\n");
    return 0;
}