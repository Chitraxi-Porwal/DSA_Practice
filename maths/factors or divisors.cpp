#include<iostream>
using namespace std;

//Problem: When i = 0, num % i will cause a division by zero error, leading to a runtime crash.
//Fix: Start the loop from i = 1 instead of i = 0.

void factors(int num){
    for(int i=1; i<=num; i++){
        if(num%i == 0){
            cout<<i<<"  ";
        }
    }
    cout<<endl;
};

void factorsOptimized(int num){
    for(int i = 1; i*i<=num; i++){
        if (num % i == 0) {
            cout << i << "  ";  // First factor
        
            if (i != num / i) {  // Second factor (avoid duplicate for perfect squares)
                cout << num / i << "  ";
            }
        }
    }
};


int main(){
    int number = 56;
    factors(number);

    int numberrrrrr = 56;
    factorsOptimized(numberrrrrr);

    return 0;
}