#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello123558";

    int length = str.length();
    cout<<"No. of characters in the string:"<<" "<<length<<endl;

    //--------------------------------

    int count = 0;
    for(char c : str) {
        if(isalpha(c)){
            count++;
        }
    }

    cout<<"No. of alphabetic characters:  " << count << endl;

    return 0;
 

    
}