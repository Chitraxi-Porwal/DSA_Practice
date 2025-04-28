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