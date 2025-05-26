#include <iostream>
#include <deque>

using namespace std;

void displayStack(deque<int> stack) {
    if (stack.empty()) {
        cout << "Stack is empty\n";
        return;
    }

    cout << "Stack elements (top to bottom): ";
    for (auto it = stack.rbegin(); it != stack.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}


int main(){
    deque<int> stack;

    displayStack(stack);

    stack.push_back(10);
    stack.push_back(20);
    stack.push_back(30);
    stack.push_back(40);
    stack.push_back(50);

    displayStack(stack);

    cout<<  stack.back()    <<"     popped from deque"<<endl;

    stack.pop_back();

    displayStack(stack);
    
    cout<<"Top Element:     "<<stack.back()<<endl;
    
    return 0;
}