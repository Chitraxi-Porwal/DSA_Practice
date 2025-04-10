#include <iostream>
#include <string>
using namespace std;

int main(){
    string greeting = "Hello";
    cout << greeting << endl;

    string language = "Python";
    cout << language << endl;

    string concate = greeting + " " + language;
    cout << concate << endl;

    //append() function
    string fullName = greeting.append(language);
    cout << fullName << endl;

    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z << endl;

    string q = x.append(y);
    cout << q << endl;

    // length() 
    cout << q.length() << endl;
    cout << language.length() << endl;

    // size()
    cout << language.size() << endl;

    cout<< language[0] << endl;
    cout<< language[5] << endl;

    // To print the last character of a string
    cout<< language[language.length() - 1]<<endl;

    language[0] = 'J';
    cout << language<<endl;

    // at() function
    cout << language.at(0)<<endl;  // First character
    cout << language.at(1)<<endl;  // Second character
    cout << language.at(language.length() - 1)<<endl;  // Last character

    //--------------------------------------------------------------
    string a = "Hello";
    cout<<a<<endl;

    string b = a;
    cout<<b<<endl;

    a[0] = 'L';
    cout<<a<<endl;

    cout<<b<<endl;

    b[2] = 'P';
    cout<<b<<endl;
    cout<<a<<endl;

    //..........................................................................
    string txt11 = "We are the so-called \"Vikings\" from the north.";
    cout<<txt11<<endl;

    string txt12 = "It\'s alright.";
    cout<<txt12<<endl;

    string txt13 = "The character \\ is called backslash.";
    cout<<txt13<<endl;

    string txt14 = "Hello\nWorld!";
    cout<<txt14<<endl;

    string txt15 = "Hello\tWorld!";
    cout<<txt15<<endl;


    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;


    string fullName;
  cout << "
  Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
    return 0;
}

