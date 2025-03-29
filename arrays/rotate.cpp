#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
   
    int input;
    cin>>input;
   
    int n = sizeof(arr)/sizeof(arr[0]);    
   
    input = input % n;         //If the number of rotations (input) is greater than the size of the array (n), rotating it n times results in the same array. This optimization avoids unnecessary full rotations.

    for(int i=0; i<input; i++){      //This loop runs input times, meaning it rotates the array input times.
        int last = arr[n-1];

        for(int j=n-1; j>0; j--){
            arr[j] = arr[j-1] ;
        }
        arr[0] = last; 
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}