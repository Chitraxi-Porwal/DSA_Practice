int arraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        
        for(int i = 0; i<n; i++){
            sum = sum + arr[i];
        }
        return sum;
    }

    