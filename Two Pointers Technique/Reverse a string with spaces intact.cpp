
class Solution {
  public:

    string reverseWithSpacesIntact(string s) {
        // code here.
        int  n = s.size();
        
        int left = 0;
        int right = n-1;
        
        while(left<right){
            
            if(s[left] == ' '){
                left++;
                continue;
            }
            
            else if(s[right] == ' '){
                right--;
                continue;
            }
          
            else{
            swap(s[left++], s[right--]);
            }
        }
        return s;
    }
};