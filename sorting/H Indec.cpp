int hIndex(vector<int>& citations) {
    // code here
    int n = citations.size();
    
    std::sort(citations.begin(), citations.end(), std::greater<int>());
    
    int count = 0;
    
    for(int i =0; i<n; i++){
        if(citations[i]>=i+1){
            count++;
        }
        else{
            break;
        }
    }
   return count; 
}
