            // 1 2
            // 3 4

            // transpose
            // 1 3
            // 2 4

            // 90 degree clockwise
            // reversing the rows after transpose
            // 3 1
            // 4 2

            // 90 degree anticlockwise
            // reversing the columns after transpose
            // 2 4
            // 1 3


void rotateby90(vector<vector<int>>& mat) {
    // code here
    int n = mat.size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
    
    for(int i=0; i<n; i++){
        int top = 0;
        int bottom = n-1;
        
        while(top<bottom){
            swap(mat[top][i], mat[bottom][i]);
            top ++;
            bottom --;
        }
        
    }
    
}