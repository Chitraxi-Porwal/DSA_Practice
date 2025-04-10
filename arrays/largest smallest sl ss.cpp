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

int thirdlargestElement(vector<int> &arr, int n) {
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    int thirdlargest = INT_MIN;

    for(int i = 1; i<n; i++){
        if(arr[i] > largest){
            thirdlargest = secondlargest;
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlargest){
            thirdlargest = secondlargest;           
            secondlargest = arr[i];
        }
        else if(arr[i]<largest && arr[i]<secondlargest && arr[i]>thirdlargest){
            thirdlargest = arr[i];           
        }

    }
        return (thirdlargest == INT_MIN) ? -1 : thirdlargest;
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

int thirdsmallestElement(vector<int> &a, int n) {
    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;
    int thirdsmallest = INT_MAX;

    for(int i = 0; i<n; i++){
        if(a[i]<smallest){
            thirdsmallest = secondsmallest;
            secondsmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] > smallest && a[i] < secondsmallest){
            thirdsmallest = secondsmallest;
            secondsmallest = a[i];
        }
        else if(a[i] > smallest && a[i] > secondsmallest && a[i] < thirdsmallest){
            thirdsmallest = a[i];
        }

    }
    return (thirdsmallest == INT_MAX) ? -1 : thirdsmallest;
}


int main(){
    vector<int> arr = {1,1,1,1,10,10,10,10};
    int n = arr.size();

    int largest = largestElement(arr, n);
    cout << "Largest element:" <<largest<<endl;

    int secondlargest = secondlargestElement(arr, n);
    cout << "Second largest element:" <<secondlargest<<endl;

    int thirdlargest = thirdlargestElement(arr, n);
    cout << "Third largest element:" <<thirdlargest<<endl;

    int smallest = smallestElement(arr, n);
    cout << "smallest element:" <<smallest<<endl;
    
    int secondsmallest = secondsmallestElement(arr, n);
    cout << "secondsmallest element:" <<secondsmallest<<endl;

    int thirdsmallest = thirdsmallestElement(arr, n);
    cout << "thirdsmallest element:" <<thirdsmallest<<endl;


    return 0;
}