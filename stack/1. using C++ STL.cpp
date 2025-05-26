#include<iostream>
#include<stack>
#include <bits/stdc++.h>
using namespace std;

void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<"   ";
        st.pop();
    }
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    // while(!st.empty()){
    //     cout<<st.top()<<"   ";
    //     st.pop();
    // }

    print(st);

    return 0;
}

// Pseudo Traversal

// stack<int> temp(st);
    
//     while(!temp.empty()) {
//         cout << temp.top() << " ";
//         temp.pop();
//     }