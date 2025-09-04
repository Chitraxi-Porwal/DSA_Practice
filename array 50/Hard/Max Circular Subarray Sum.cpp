class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        // your code here
        int n = arr.size();
        int res = arr[0];
        int currSum;
        
        for(int i = 0; i<n; i++){
            currSum = 0;
            
            for(int j = 0; j<n; j++){
                int idx = (i + j)%n;
                currSum = arr[idx]+currSum;
                res = max(res, currSum);
            }
        }
        
        return res;
    
        
    }
};