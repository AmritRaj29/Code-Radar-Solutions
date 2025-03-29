// Your code here...
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]){
    int uniqueRanked[n];
    int uniqueCount = 0;
    for (int i = 0; i < n; i++){
        if (i == 0 || ranked[i] != ranked[i-1]){
            uniqueRanked[uniqueCount++] = ranked[i];
        }
    }
    for (int i = 0; i < m; i++){
        int rank = 1;
        int j = 0;
        while (j < uniqueCount && uniqueRanked[j] > player[i]){
            rank++;
            j++;
        }
        result[i] = rank;
    }
}
int main(){
    int ranked[] = {100, 90, 90, 80, 75,60};
    int player[] = {50, 65, 77, 90};
    int n = sizeof(ranked)/sizeof(ranked[0]);
    int m = sizeof(player)/sizeof(player[0]);
    int result[m];

    trackPlayerRanks(ranked, n, player, m, result);
    for (int i = 0; i < m; i++){
        printf("%d", result[i]);
    }
    return 0;
}