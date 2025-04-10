void nextPermutation(vector<int>& arr) {
    // code here
    int n = arr.size();
    int pivot = 0;
    int pivotIndex = -1;
    
    for(int i = n-1; i > 0; i--){
        if(arr[i-1]<arr[i]){
            pivotIndex = i - 1;
            break;
        }
    }
    
    if(pivotIndex == -1){
        reverse(arr.begin(), arr.end());
        return;
    }
    
    int smallestIndex = -1;
    for(int i = n-1; i > pivotIndex; i--){
        if(arr[i] > arr[pivotIndex]){
            smallestIndex = i;
            break;
        }
    }
    
    swap(arr[pivotIndex], arr[smallestIndex]);
    
    reverse(arr.begin() + pivotIndex+1, arr.end());
}