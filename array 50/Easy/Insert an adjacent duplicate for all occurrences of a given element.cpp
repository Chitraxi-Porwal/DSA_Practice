#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> duplicateK(vector<int> &arr, int k){

    int n = arr.size();

    for(int i = 0; i<n; i++){
        if(arr[i] == k){

            arr.insert(arr.begin() + i + 1, k);
            i++;

            arr.pop_back();
        }
    }
    return arr;
}

int main(){

    vector<int> arr = {1,0,2,3,0,4,5,0};
    int k = 0;

    duplicateK(arr, k);

    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<"   ";
    }
    
    return 0;
}