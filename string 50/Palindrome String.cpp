bool isPalindrome(string& s) {
    // code here
    int left = 0;
    int right = s.length() - 1;
    
    while(left<right){
        if(s[left] != s[right]){
            return 0;
        }
        
        left++;
        right--;
    }
    return 1;
}