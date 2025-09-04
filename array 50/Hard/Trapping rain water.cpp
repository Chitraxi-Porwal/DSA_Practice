// class Solution {
//   public:
//     int maxWater(vector<int> &arr) {
//         // code here
//         int n = arr.size();
//         int res = 0;
        
//         for(int i = 1; i<n-1; i++){
            
//             int left = arr[i];
//             for(int j = 0; j<i; j++){
//                 left = max(left, arr[j]);
//             }
            
//             int right = arr[i];
//             for(int j = i+1; j<n; j++){
//                 right = max(right, arr[j]);
//             }
            
//             res += (min(left, right) - arr[i]);
//         }
//         return res;
//     }
// };


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