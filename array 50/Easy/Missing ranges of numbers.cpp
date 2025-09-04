class Solution {
  public:
    vector<vector<int>> missingRanges(vector<int> &arr, int lower, int upper) {
        // code here
        int n = arr.size();
        vector<vector<int>> res;
        
        int prev = lower - 1;
        
        for(int i = 0; i<=n; ++i){
            int curr = (i == n) ? upper + 1 : arr[i];
            if(curr - prev > 1){
                res.push_back({prev + 1, curr-1});
            }
            prev = curr;
        }
        return res;
    }
};








//  vector<vector<int>> missingRanges(vector<int> &arr, int lower, int upper) {
//         // code here
//         int n = arr.size();
//         vector<vector<int>> res;
        
//         if(lower<arr[0]){
//             res.push_back({lower, arr[0]-1});
//         }
        
//         for(int i = 0; i<n; ++i){
//             if(arr[i+1] - arr[i] > 1){
//                 res.push_back({arr[i]+1, arr[i+1] - 1});
//             }
//         }
        
//         if(n>0 && upper>arr[n-1]){
//             res.push_back({arr[n-1] + 1, upper});   
//         }
        
//         if(res.empty()) {
//             return { };
//         }
//         return res;
//     }


