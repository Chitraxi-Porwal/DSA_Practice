#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "NeuroNavi";


    for (int i = 0; i < name.size(); i++) {  //length()
        cout << name[i] << endl;
    }

    cout <<endl;

    for (char c : name) {
        cout << c << endl;
    }

    cout <<endl;

    for (string::iterator it = name.begin(); it != name.end(); ++it) {
        cout << *it << endl;
    }

    cout <<endl;

    int i = 0;
    while(name[i]){
        cout<<name[i];
        i++;
    }

    return 0;
}
