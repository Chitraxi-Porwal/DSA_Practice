#include<iostream>
using namespace std;
#include<vector>

void swapArray(vector<int> &arr){
    int n = arr.size();
    vector <int> temp(n);

    for(int i = 0; i<n/2; i++){
        temp[i] = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp[i];
    }
};

int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8,9,0};

    swapArray(arr);

    for(int num : arr){
        cout << num << " ";
    }

    return 0;
}
