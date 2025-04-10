#include<iostream>
using namespace std;

void leapYear(int year){
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "leap year";
    }
    else{
        cout << "Normal year";
    }
}

int main(){
    int year = 1900;

    leapYear(year);

    return 0;
}