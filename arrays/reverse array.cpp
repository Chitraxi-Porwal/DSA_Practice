#include<iostream>
using namespace std;
#include<vector>

void reverseBrute(vector<int> &arr) {
    int n = arr.size();
    int temp[n];

    for(int i =0; i<n; i++){
        temp[i] = arr[i];
    }

    for(int i = 0; i<n; i++){
        arr[i] = temp[n-i-1];
    }

};


void reverseOptimal(vector<int> &arr) {
    int n = arr.size();

    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }
};



void reverseThird(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);

        for(int i=0; i<n/2; i++){
            temp[i] = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp[i];
        }
};


int main(){
    vector<int> arrB = {1,2,3,4,5,6,7,8,9,0};
    vector<int> arrO = {1,2,3,4,5,6,7,8,9,0};
    vector<int> arr3 = {1,2,3,4,5,6,7,8,9,0};


    reverseBrute(arrB);
    for(int num: arrB){
        cout << num <<" ";
    }
    cout<<endl;


    reverseOptimal(arrO);
    for(int num: arrO){
        cout << num <<" ";
    }
    cout<<endl;


    
    reverseThird(arr3);
    for(int num: arr3){
        cout << num <<" ";
    }
    cout<<endl;


    return 0;

}