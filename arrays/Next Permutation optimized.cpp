void nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int pivotIndex = -1;

    // Step 1: Find the pivot (rightmost element that is smaller than its next)
    for (int i = n - 1; i > 0; i--) {
        if (arr[i - 1] < arr[i]) {
            pivotIndex = i - 1;
            break;
        }
    }

    // Step 2: If no pivot is found, reverse the array (last permutation case)
    if (pivotIndex == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    // Step 3: Find the smallest element larger than pivot on the right
    for (int i = n - 1; i > pivotIndex; i--) {
        if (arr[i] > arr[pivotIndex]) {
            swap(arr[pivotIndex], arr[i]);
            break;
        }
    }

    // Step 4: Reverse the right portion after pivot to get the next smallest permutation
    reverse(arr.begin() + pivotIndex + 1, arr.end());
}