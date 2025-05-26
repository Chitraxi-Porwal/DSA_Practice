int missingNum(vector<int>& arr) {
    // code here
    
    int n = arr.size();
    
    long long sum = (long long)(n+1) * (n+2) / 2;
    
    long long arrSum = 0;
    
    for(int i=0; i<n; i++){
        arrSum = arrSum + arr[i];
    }
    
    return (sum - arrSum); 
    
}
