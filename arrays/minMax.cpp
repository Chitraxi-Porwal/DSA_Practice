pair<int, int> getMinMax(vector<int> arr) {
    // code here
    int n = arr.size();
    int min = arr[0];
    int max = arr[0];

    for( int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if( arr[i] < min){
            min = arr[i];
        }
    }
    return {min, max};
}