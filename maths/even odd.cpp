#include<iostream>
using namespace std;


void evenOdd(int num){
    if(num%2 == 0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
};

int main(){
    int number = 55;
    
    evenOdd(number);

    return 0;
}

