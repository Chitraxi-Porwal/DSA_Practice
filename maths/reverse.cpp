#include<iostream>
using namespace std;

int main(){
    int num = 123456789;                        // for 1234 / 10 = 123 (quotient)  and for 1234 % 10 =4 (remainder)

    int reverse = 0;

    while(num>0){
        int lastDigit = num%10;
        reverse = (reverse*10)+lastDigit;
        num = num/10;
    }
    cout<<reverse;

}

