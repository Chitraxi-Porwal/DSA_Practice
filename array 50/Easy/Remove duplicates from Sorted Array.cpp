int removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if(n<=1){
            return n;
        }
        
        int k = 1;
        
        for(int i = 1; i<n; i++){
            if(arr[i] != arr[i-1]){
                arr[k] = arr[i];
                k++;
            }
            
        }
        return k;
    }