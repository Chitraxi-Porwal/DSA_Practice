#include<iostream>
#include<vector>
using namespace std;

int removeOccurences(vector<int> &arr, int ele){
    int n = arr.size();

    int k = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] != ele){
            arr[k++] = arr[i];
        }
    }

    return k;
}

int main(){
    vector<int> arr = {2,7,5,0,6,2,4,5,0,2,2,8,2,5,2};            //6 - 2s  and 9 others
    int ele = 2;
    cout<<removeOccurences(arr, ele);


    return 0;
}