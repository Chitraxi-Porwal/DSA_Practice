int countFreq(vector<int>& arr, int target) {
    // code here
    int n = arr.size();
    int count = 0;
    
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            count ++;
        }
    }
    return count;
    
}