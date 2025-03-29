#include <bits/stdc++.h>
using namespace std; // Required to avoid writing std:: repeatedly

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) { // Start from 1 since arr[0] is already stored in largest
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int smallestElement(vector<int> &arr, int n) {
    int smallest = arr[0];
    for(int i = 1; i<n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int secondlargestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    int secondlargest = -1;

    for(int i = 1; i<n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
        return secondlargest;
}

int secondsmallestElement(vector<int> &a, int n) {
    int smallest = a[0];
    int secondsmallest = INT_MAX;

    for(int i = 1; i<n; i++){
        if(a[i]<smallest){
            secondsmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < secondsmallest){
            secondsmallest = a[i];
        }
    }
    return secondsmallest;
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

    int largest = largestElement(arr, n);
    cout << "Largest element:" <<largest<<endl;

    int smallest = smallestElement(arr, n);
    cout << "smallest element:" <<smallest<<endl;
    
    int secondlargest = secondlargestElement(arr, n);
    cout << "secondlargest element:" <<secondlargest<<endl;
    
    int secondsmallest = secondsmallestElement(arr, n);
    cout << "secondsmallest element:" <<secondsmallest<<endl;

    return 0;
}