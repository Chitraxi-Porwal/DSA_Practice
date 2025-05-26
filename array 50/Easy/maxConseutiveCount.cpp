int maxConsecutiveCount(vector<int> &arr) {
    // code here
    int n = arr.size();
    int count = 1;
    int maxCount = 0;

    for(int i = 1; i<n; i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            maxCount = max(count, maxCount);
            count = 1;
        }
    }
    return max(count, maxCount);  
}