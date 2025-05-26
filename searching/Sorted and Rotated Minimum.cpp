int findMin(vector<int>& arr) {
    // complete the function here
    int n = arr.size();
    int min = arr[0];
    
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}