#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Hello123558";

    cout<< s.length();

    bool emptyString = s.empty();
    cout<< emptyString;

    char ch = s.at(o);
    cout<< ch;
  
    cout << s.front(); // 'h'
    cout << s.back();  // 'o'

    s.append(" world");
    s += "!";

    s.insert(5, " C++"); // "hello C++"

    s.erase(5, 4); // Removes 4 chars starting at index 5
   
    s.replace(0, 5, "Hi"); // "Hi world"
   
    string sub = s.substr(6, 5); // "world"

    //🔹 10. find(str) / rfind(str)
    int pos = s.find("world"); // returns index or string::npos

    if (s.compare("hello") == 0) {
        cout << "Equal";
    }
    
    s.clear();

    const char* cstr = s.c_str();
    print(cstr)

    return 0;
}