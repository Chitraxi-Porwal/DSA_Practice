void sort012(vector<int>& arr) {
    // code here
    int count0 = 0, count1 = 0, count2 = 0;
    
    for(int num : arr){
        if(num == 0) {
            count0++;
        }
        else if(num == 1) count1++;
        else count2++;
    }
    int index = 0;
    while(count0--) arr[index++] = 0;
    while(count1--) arr[index++] = 1;
    while(count2--) arr[index++] = 2;
}