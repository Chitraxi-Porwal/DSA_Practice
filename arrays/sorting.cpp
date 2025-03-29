#include<iostream>
#include <vector>
using namespace std;

bool issortedasc(int n, vector<int> &arr){
    for(int i = 1; i<n ; i++){
        if(arr[i] < arr[i-1]){
            return false;                 //not sorted in asc           
        }
    }
    return true;                            //sorted in asc                 
}



bool issorteddesc(int n, vector<int> &arr){
    for(int i = 1; i<n ; i++){
        if(arr[i] > arr[i-1]){
            return false;                 //not sorted in desc
        }
    }
    return true;                            //sorted in desc
}



bool issorted(int n, vector<int> &arr){

    bool ascending = true, descending = true;
    
    for(int i = 1; i<n ; i++){
        if(arr[i] > arr[i-1] ){          //not desc
            ascending = false;            // Not strictly increasing                         //not sorted in any
        }
        if(arr[i] < arr[i-1] ){
            descending = false;        // Not strictly decreasing                               //not sorted in any    
        }
    }
    return ascending || descending;    // True if either condition holds                                          //sorted in any one
}




int main(){
    int n;
    cout << "Enter the number of elements"<<endl;
    cin >> n;



    vector<int> arr(n);



    cout<< "Enter" << n << "elements";
    for(int i = 0; i<n ; i++) {
        cin >> arr[i];
    }




    bool ascsorted = issortedasc(n , arr);
    if (ascsorted) {
        cout << "The array is sorted in asc." << endl;
    } else {
        cout << "The array is not sorted in asc." << endl;
    }




    bool descsorted = issorteddesc(n , arr);
    if (descsorted) {
        cout << "The array is sorted in desc." << endl;
    } else {
        cout << "The array is not sorted in desc." << endl;
    }
    
    
    
    
    bool sorted = issorted(n , arr);

    if (sorted) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted neither in asc nor in desc ." << endl;
    }
    return 0;
}