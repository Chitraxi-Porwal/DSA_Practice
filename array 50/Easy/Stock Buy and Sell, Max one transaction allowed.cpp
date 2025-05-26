 int maximumProfitBrute(vector<int> &prices) {
        // code here
        int n = prices.size();
        int res = 0;
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                res = max(res, (prices[j] - prices[i]));
            }
        }
        
        return res;
        
    }