#include <iostream>
using namespace std;
#include<vector>

void pushZeroestoEnd(vector<int>& arr){
    int count = 0;

    for(int i=0; i<arr.size(); i++) {
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
    
int main(){
    vector<int> arr = {0,1,0,2,0,0,3};

    pushZeroestoEnd(arr);

    cout<<"Modified array:";

    for(int num: arr){
        cout << num <<" ";
    }
    cout<<endl;

    return 0;
}