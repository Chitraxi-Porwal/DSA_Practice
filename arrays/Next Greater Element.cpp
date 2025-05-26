// Next Greater Element
// Difficulty: MediumAccuracy: 32.95%Submissions: 447K+Points: 4Average Time: 20m
// Given an array arr[ ] of integers, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

// Examples

// Input: arr[] = [1, 3, 2, 4]
// Output: [3, 4, 4, -1]
// Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4, since it doesn't exist, it is -1.

//brute force  O(n2)

vector<int> nextLargerElement(vector<int>& arr) {
    // code here
    
    int n = arr.size();
    vector<int> res(n, -1);
    
    for(int i = 0; i<n; i++){
        for( int j = i+1; j<n; j++){
            if(arr[j]>arr[i]){
                res[i] = arr[j];
                break;
            }
        }
    }
    return res;
    
}

// stack   O(n)