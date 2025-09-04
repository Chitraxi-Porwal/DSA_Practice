class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if(n<=1){
            return n;
        }
        
        int idx = 1;
        
        for(int i = 1; i<n; i++){
            if(arr[i] != arr[i-1]){
                arr[idx++] = arr[i];
            }
        }
        
        return idx;
    }
};