#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> s;

    s.push_back(10);
    s.push_back(20);
    s.push_back(30);

    cout<< s.back() << "    popped from stack\n";
    s.pop_back();

    cout<<"Elements present in stack:   ";
    while(!s.empty()){
        cout<<s.back()<<"   ";
        s.pop_back();
    }
    return 0;
}