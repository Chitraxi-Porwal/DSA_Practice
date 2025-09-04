int lengthString(string &s) {
        // Your code here
        int n = s.size();
        int i = 0;
        int cnt = 0;
        
        while(s[i]){
            cnt++;
            i++;
        }
        return cnt;
    }




// User function Template for C++
bool areStringsSame(string s1, string s2) {
    // code here
    if(s1.size() != s2.size()){
        return false;
    }
    
    for(int i = 0; i<s1.size(); i++){
        if(s1[i] != s2[i]){
            return false;
        }
    }
    return true;
}





// User function Template for C++
class Solution {
  public:

    // Function to search for a character in the string
    int searchCharacter(string &s, char ch) {
        // code here
        int n = s.size();
        int index = -1;
        for(int i = 0; i<n; i++){
            if(s[i] == ch){
                index = i;
                return index;
            }
        }
        return index;
    }
};




string insertChar(string &s, char c, int pos) {
  
    string res = "";
    for(int i = 0; i<s.length(); i++){
        if(i == pos){
            res.push_back(c);
        }
        res.push_back(s[i]);
    }

    if(pos>=s.lenght()){
        res.push_back(c);
    }

    return res;
}



// User function Template for C++
class Solution {
  public:

    // Function to remove a character from the given position
    string removeCharacter(string &s, int pos) {
        // code here
        if(pos>s.size() || pos<0){
            return "";
        }
        
        for(int i = pos; i<s.size(); i++){
            s[i] = s[i+1];
        }
        
        s.resize(s.length() - 1);
        
        return s;
    }
    
};




