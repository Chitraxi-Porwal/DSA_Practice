#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& arr, int start, int end){
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    d = d % n;
    
    reverse(arr, 0, d-1);       //start
    reverse(arr, d, n-1);       //end
    reverse(arr, 0, n-1);       //full
}

void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    d = d % n;
    for(int i = 0; i < d; i++){
        int first  = arr[0];
        
        for(int j = 0; j < n - 1; j++){
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
        
    }
}


int main(){

}