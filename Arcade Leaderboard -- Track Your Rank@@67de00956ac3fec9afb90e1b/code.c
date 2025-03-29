// Your code here...
#include <stdio.h>
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]){
    
    for (int i = 0; i < m; i++){
        int rank = 1;
        int j = 0;
        while (j < n && ranked[j] > player[i]){
            rank++;
            j++;
        }
        while (j < n && ranked[j] == player[i]){
            j++;
        }
        result[i] = rank;
    }
}
int main() {

    int n,m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);
    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);
    int result[200000];

    trackPlayerRanks(ranked, n, player, m, result);
    for (int i = 0; i < m; i++)
        printf("%d\n", result[i]);
    
    return 0;
}