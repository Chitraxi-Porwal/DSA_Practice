void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    d = d%n;
    
    for(int i = 0; i<d; i++){
        int first = arr[0];
        
        for(int j = 0; j<n-1; j++){
            arr[j] = arr[j+1];
        }
        
        arr[n-1] = first;
    }
}


void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    d = d%n;
    
    reverse(arr.begin()  , arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin() , arr.end());
    
}