#include<iostream>
using namespace std;

int count(int n){
    int cnt = 0;
    while(n>0){
        cnt++;
        n = n/10;
    }
    return cnt;
}

int main(){
    int num = 589623;

    int cnt = count(num);
    cout<<cnt;
    
    return 0;
}