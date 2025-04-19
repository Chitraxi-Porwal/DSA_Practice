vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    // code here
    int n = arr.size();
    
    vector<int> result;
    
    for(int i = 0; i <= n-k; i++){
        int max_val = arr[i];
        for(int j = i; j< i+k; j++){
            max_val = max(max_val, arr[j]);
        }
        result.push_back(max_val);
    }

return result;    
}