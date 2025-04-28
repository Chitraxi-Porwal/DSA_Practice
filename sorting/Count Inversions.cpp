int inversionCount(vector<int> &arr) {
    // Your Code Here
    int n = arr.size();
    int count = 0;
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]>arr[j] && i<j){
                count++;
            }
        }
    }
    return count;
}