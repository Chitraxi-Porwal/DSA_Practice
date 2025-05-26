// Search in Rotated Sorted Array
// Difficulty: MediumAccuracy: 37.64%Submissions: 261K+Points: 4
// Given a sorted and rotated array arr[] of distinct elements, the task is to find the index of a target key. Return -1 if the key is not found.

// Examples :

// Input: arr[] = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 3
// Output: 8
// Explanation: 3 is found at index 8.
// Input: arr[] = [3, 5, 1, 2], key = 6
// Output: -1
// Explanation: There is no element that has value 6.




int search(vector<int>& arr, int key) {
    // Code Here
    int n = arr.size();
    int index = -1;
    
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            index = i;
        }
    }
    return index;
}