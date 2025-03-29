// Your code here...
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]){
    int uniqueRanked[n];
    int uniqueCount = 0;
    for (int i = 0; i < n; i++){
        if (i == 0 || ranked[i])
    }
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