// Input: N = 4, mat[][] = [[1, 1, 1, 1], [2, 2, 2, 2], [3, 3, 3, 3], [4, 4, 4, 4]]
// Output: [[1, 2, 3, 4] , [1, 2, 3, 4], [1, 2, 3, 4], [1, 2, 3, 4]] 


void transpose(vector<vector<int>>& mat, int n) {
    // code here
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i < j)
                swap(mat[i][j], mat[j][i]);
        }
    }
}