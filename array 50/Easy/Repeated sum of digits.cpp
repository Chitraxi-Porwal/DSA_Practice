#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int repeatedSumOfDigits(int N){
    if(N<10) return N;

    int sum = 0;

    while(N > 0){
        sum = sum + N%10;
        N = N / 10;
    }

    repeatedSumOfDigits(sum);
}

int main(){
    int N = 99999999;

    int res;
    res = repeatedSumOfDigits(N);

    cout<<res;
}