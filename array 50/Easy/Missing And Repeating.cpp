class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int  n = arr.size();
        vector<int>freq(n+1, false);
        
        int missing = -1;
        int repeating = -1;
        
        for(int i = 0; i<n; i++){
            freq[arr[i]]++;
        }
        
        for(int i = 1; i<n+1; i++){
            if(freq[i] == 0){
                missing = i;
            }
            
            if(freq[i] == 2){
                repeating = i;
            }
        }
        
        return {repeating, missing};
        
    }
};