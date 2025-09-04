// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> pos, neg;
        
        for(int i = 0; i<n; i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }
            else{
                pos.push_back(arr[i]);
            }
        }
        
        int posIdx = 0 , negIdx = 0 , i = 0;
        
        while(posIdx < pos.size() && negIdx < neg.size()) {
            if( i % 2 == 0 ){
                arr[i++] = pos[posIdx++];
            }
            else{
                arr[i++] = neg[negIdx++];
            }
        }
        
        while(posIdx < pos.size()){
            arr[i++] = pos[posIdx++];
        }
        
        while(negIdx < neg.size()){
            arr[i++] = neg[negIdx++];
        }
      
    }
};