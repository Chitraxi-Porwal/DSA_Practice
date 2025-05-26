#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

class Stack{
    Node* head;

    public:
        Stack(){
            this->head = nullptr;
        }

        bool isEmpty(){
            return head == nullptr;
        }

        void push(int newData){
            Node*newNode = new Node(newData);

            if(!newNode){
                cout<<"\n Stack Overflow";
            }

            newNode->next = head;
            head = newNode;
        }

        void pop(){
            if(this->isEmpty()){
                cout<<"\nStack Underflow"<<endl;
            }
            else{
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        int peek(){
            if(!isEmpty()){
                return head->data;
            }
            else{
                cout<<"\nStack is empty";
                return INT_MIN;
            }
        }

        void display(){
            if(isEmpty()){
                cout<<"Stack is empty\n";
                return;
            }

            Node* temp = head;
            cout<<"Stack elements (top to bottom):      ";
            while(temp != nullptr){
                cout<<temp->data<<"     ";
                temp = temp->next;
            }
            cout<<endl;
        }
};



int main(){
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();    

    cout<<"Top element is   "<<st.peek()<<endl;

    cout<<"Removing two elements.......     "<<endl;

    st.pop();
    st.pop();

    st.display();    

    cout<<"Top element is   "<<st.peek()<<endl;

    return 0;
}