bool pairWiseConsecutive(stack<int> s) {
    stack<int> scopy(s);           // ✅ Copy to preserve original stack
    int sizze = 0;

    vector<int> temp;              // ✅ To hold elements in top-to-bottom order

    while(!scopy.empty()){
        temp.push_back(scopy.top());   // ✅ Top of original stack is temp[0]
        scopy.pop();
        sizze++;
    }

    for(int i = 0; i < sizze - 1; i += 2) {
        if(abs(temp[i] - temp[i+1]) != 1){
            return false;              // ✅ Immediately return false if pair not consecutive
        }
    }

    return true;   // ✅ All pairs passed → return true
}



// When sizze is even: all elements are paired.

// When sizze is odd: the last element is automatically skipped due to i < sizze - 1 condition.

// So there's no need for separate logic for odd/even — the loop naturally handles both by checking i+1 only when it exists.