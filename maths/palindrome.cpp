#include<iostream>
using namespace std;

int reverse(int num){
    int reverse = 0;
    while( num > 0 ) {
        int lastDigit = num % 10;
        reverse = ( reverse * 10 ) + lastDigit ;
        num = num / 10 ;
    }
    return reverse;
}

void palindrome(int num){
    int reversedNumber = reverse(num);
    
    if(num == reversedNumber){
        cout<<num<<" is a Palindrome number";
    }
    else{
        cout<<"Not a Palindrome number";
    }
}

int main(){
    int number = 121;

    palindrome(number);

    return 0;
}