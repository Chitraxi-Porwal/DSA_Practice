//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    // vector<int> addOne(vector<int>& arr) {
    //     // code here
    //     int n = arr.size();
    //     long long num = 0;
        
    //     for(int i = 0; i<n; i++){
    //         num = num*10+arr[i];
    //     }
        
    //     num = num+1;
        
    //     vector<int> result;
    //     while(num > 0){
    //         int temp = num%10;
    //         result.push_back(temp);
    //         num = num / 10;
    //     }
        
    //     reverse(result.begin(), result.end());
        
    //     return result;
    // }



    vector<int> addOne(vector<int>& arr) {
        // code here
        int n = arr.size();
        int carry = 1;
        
        for(int i = n-1; i>=0; i--){
            int sum = arr[i] + carry;
            arr[i] = sum%10;
            carry = sum/10;
        }
        
        if(carry){
            arr.insert(arr.begin(), carry); 
        }
        
        return arr;
       
        
    }


    
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        Solution ob;
        vector<int> result = ob.addOne(nums);

        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends