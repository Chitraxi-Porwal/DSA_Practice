// Wave Array
// Difficulty: EasyAccuracy: 63.69%Submissions: 266K+Points: 2Average Time: 20m
// Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place). In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
// If there are multiple solutions, find the lexicographically smallest one.

// Note: The given array is sorted in ascending order, and you don't need to return anything to change the original array.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [2, 1, 4, 3, 5]
// Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5.

// void convertToWave(vector<int>& arr) {
//     // code here
//     int n =arr.size();
    
//     for(int i = 1; i<n; i=i+2){
//         swap(arr[i], arr[i-1]);
//     }
    
// }
//              in for loop i<n  or i<=n-1  is same

void convertToWave(vector<int>& arr) {
    // code here
    int n =arr.size();
    
    for(int i = 1; i<=n-1; i=i+2){
        swap(arr[i], arr[i-1]);
    }
    
}