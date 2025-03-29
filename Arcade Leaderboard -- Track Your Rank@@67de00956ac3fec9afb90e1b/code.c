// Your code here...
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]){
    for (int i = 0; i < m; i++){
        int rank = 1;
        int j = 1;
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