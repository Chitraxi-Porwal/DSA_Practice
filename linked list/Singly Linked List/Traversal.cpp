#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

void traverseListIteratively(Node* head){
    Node* current = head;
    while(current != nullptr){
       
        cout<< current->data << "   ";

        current = current->next;
    }
    cout << endl;
}


void traverseListRecursively(Node* head){
    if(head == nullptr){
        cout<<endl;
        return;
    }

    cout<<head->data<<"     ";

    traverseListRecursively(head->next);
}


int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseListIteratively(head);

    traverseListRecursively(head);

    return 0;
}