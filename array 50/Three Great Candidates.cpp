// int maxProduct(vector<int> arr) {
//     // code here
//     int n = arr.size();
//     int maxProduct = 0;
    
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n ; j++){
//             for(int k = j+1; k<n; k++ ){
//                 maxProduct = max(maxProduct, arr[i]*arr[j]*arr[k]);
//             }
//         }
//     }
    
//     return maxProduct;
// }




// int maxProduct(vector<int> arr) {
//     // code here
//     int n = arr.size();
//     int maxProduct = 0;
    
//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;
//     int thirdLargest = INT_MIN;
    
//     int smallest = INT_MAX;
//     int secondSmallest = INT_MAX;
    
//     for(int i = 0; i<n; i++){
        
//        if(arr[i]>largest){
//            thirdLargest = secondLargest;
//            secondLargest = largest;
//            largest = arr[i];
//        }
//        else if(arr[i]<largest && arr[i]>secondLargest){
//            thirdLargest = secondLargest;
//            secondLargest = arr[i];
//        }
//        else if(arr[i]<largest && arr[i]<secondLargest && arr[i]>thirdLargest){
//            thirdLargest = arr[i];
//         }
        
//         if(arr[i]<smallest){
//            secondSmallest = smallest;
//            smallest = arr[i];
//        }
//        else if(arr[i]>smallest && arr[i]<secondSmallest){
//            secondSmallest = arr[i];
//        }
       
//     }

// maxProduct = max(largest*secondLargest*thirdLargest , smallest*secondSmallest*largest);
// return maxProduct;
// }
