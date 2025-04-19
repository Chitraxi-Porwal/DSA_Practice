int search(vector<int>& arr, int x) {
    // Your code here
    int found = 0;
    int n = arr.size();
    
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            found = i;  
            return found;
        }
    }
    
    if(found == 0){ 
        return -1;
    }
}