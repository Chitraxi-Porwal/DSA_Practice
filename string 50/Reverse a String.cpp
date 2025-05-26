string reverseString(string& s) {
    // code here
    reverse(s.begin(), s.end());
    return s;
}



string reverseString(string& s) {
    // code here
    string rev;
    int n = s.size();
    for(int i = n-1; i>=0; i--){
        rev = rev + s[i];
    }
    return rev;
}



string reverseString(string& s) {
    // code here
    int left = 0;
    int right = s.size() - 1;
    
    while(left<right){
        swap(s[left], s[right]);   
        left++;
        right--;
    }
    return s;
}