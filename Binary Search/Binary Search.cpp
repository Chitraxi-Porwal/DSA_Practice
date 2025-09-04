#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int n = arr.size();
    
    int low = 0;
    int high = n-1;
    int mid = 0;

    while(low<high){
        mid = (low+high)/2;

        if(target == arr[mid]){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {20,23,25,27,80,90,450};

    int target = 27;

    int result = binarySearch(arr, target);

    cout<<"Target element lies at index :"<<result<<endl;


    return 0;
}