#include<iostream>
using namespace std;


 bool twoSum(vector<int>& arr, int target) {
    // code here
    unordered_set<int> seen;
    
    for(int num: arr){
        int complement = target - num;
        if(seen.count(complement)){
            return true;
        }
        seen.insert(num);
    }
    return false;
}




void twosum(int<vector> arr, int n, int target) {

}

int main(){

    twoSum(arr, n, target);

    return 0;
}







 // int n;
    // cout << "Enter the size of the array: "
    // cin >> n;

    // int arr[n];
    
    // cout << "Input array elements:\n";
    
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i]
    // }
    
    // int target;
    
    // cout << "Enter target sum:";
    
    // cin >> target;