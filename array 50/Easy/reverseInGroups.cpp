void reverseInGroups(vector<int> &arr, int k) {
    // code here
    int n = arr.size();
    
    if(k>=n){
        reverse(arr.begin(), arr.end());
        return;
    }
    
    for(int i = 0; i<n; i = i+k){
        reverse(arr.begin() + i, arr.begin() + min(i + k, n));
    }
}