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

Node* insertionBeginning(Node*head, int value){
    Node* newNode = new Node(value);

    newNode->next = head;
    // head = newNode;    jo return kar rahe hai wo head me hi jaakar store hoga

    return newNode;

}

Node* insertionSpecificPosition(Node*head, int pos, int value){
    if(pos<1){
        return head;
    }

    if(pos == 1){
        Node*newNode = new Node(value);
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;

    for(int i = 1; i<pos-1 && curr != nullptr; i++){
        curr = curr->next;
    }

    if(curr == nullptr){
        return head;
    }

    Node*newNode = new Node(value);

    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

Node* insertionEnding(Node*head, int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        return newNode;
    }

    Node*last = head;

    while(last -> next != nullptr){
        last=last->next;
    }

    last -> next = newNode;

    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout<<endl;

    cout<<"Original List";
    traverseListIteratively(head);

    cout<<"Insertion at beginning of List";
    head =  insertionBeginning(head, 1000);
    traverseListIteratively(head);

    cout<<"Insertion at specific position of List";
    head = insertionSpecificPosition(head, 4, 2000);
    traverseListIteratively(head);
  
    cout<<"Insertion at end of List";
    head = insertionEnding(head, 3000);
    traverseListIteratively(head);

    return 0;
}