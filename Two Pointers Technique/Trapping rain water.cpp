class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int res = 0;
        
        int left = 1;
        int right = n-2;
        
        int lmax = arr[left - 1];
        int rmax = arr[right + 1];
        
        while(left <= right){
            
            if(rmax <= lmax){
                res += max(0, rmax - arr[right]);
                
                rmax = max(rmax, arr[right]);
                
                right--;
            }
            else{
                res+= max(0, lmax - arr[left]);
                
                lmax = max(lmax, arr[left]);
                
                left++;
            }
        }
        return res;
    }
};