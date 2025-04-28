int findMaximum(vector<int> &arr) {
    // code here
    
    int n = arr.size();
    
    int bitonic = arr[0];
    
    for(int i = 0; i<n; i++){
        if(arr[i]>=bitonic){
            bitonic = arr[i];
        }
    }
    return bitonic;
}