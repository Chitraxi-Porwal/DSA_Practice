int peakElement(vector<int> &arr) {
    // Your code here
    int n = arr.size();
    
    if(n == 1)return 0;
    
    for(int i = 0; i<n; i++){
        if( i == 0){
            if(arr[0]>arr[i+1]){
                return i;
            }
        }
        
        else if( i == n-1){
            if(arr[n-1]>arr[n-2]){
                return i;
            }
        }
        
        else if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                return i;
        }
    }
    return -1;
}