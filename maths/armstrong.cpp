#include<iostream>
using namespace std;
#include <cmath>  // For pow()

void armstrong(int num){
    int dup = num;
    int checkedSum = 0;
    int digitCount = 0;

    int temp = num;
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }

    while(dup > 0){
        int digit = dup % 10;
        //cout<<digit<<endl;
        checkedSum = ( (checkedSum) + (pow(digit, digitCount) ));
        //cout<<checkedSum<<endl;
        dup = dup/10;
        //cout<<dup<<endl;
    }
    if(checkedSum == num){
        cout<<num<<"  is a Armstrong number";
    }
    else{
        cout<<"Not a Armstrong number";
    }
}

int main(){
    int number = 371;

    armstrong(number);

    return 0;
}