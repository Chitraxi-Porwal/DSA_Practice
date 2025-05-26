int getSecondLargest(vector<int> &arr) {
    // code here
    int n = arr.size();
    int largest = arr[0];
    int secondLargest = -1;
    
    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}