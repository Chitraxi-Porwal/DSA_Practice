// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> res;
        int minDiff = INT_MAX;
        
        int l = 0, r = n-1;
        
        while(l<r){
            int currSum = arr[l] + arr[r];
            
            if(abs(target - currSum) < minDiff){
                minDiff = abs(target - currSum);
                res = {arr[l], arr[r]};
            }
            
            if(currSum < target){
                l++;
            }
            
            else if(currSum > target){
                r--;
            }
            
            else{
                return res;
            }
        }
        return res;
    }
};