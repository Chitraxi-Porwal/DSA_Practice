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


int countNodes(Node*head){
    int counter = 0;

    Node*curr = head;

    while(curr != NULL){
        curr = curr->next;

        counter++;
    }

    cout<<"Linked List has"<<counter<<"Nodes";

    return 0;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseListIteratively(head);

    cout<<endl;

    countNodes(head);


    return 0;
}