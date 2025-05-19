#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this->data = data;
            this->prev = nullptr;
            this->next = nullptr;
        }
};

void forwardTraversalIteratively(Node* head){
    Node* curr = head;

    while(curr != nullptr){
        cout<< curr->data <<"   ";

        curr = curr->next;
    }

    cout<<endl;
}


Node* insertionAtFront(Node* head, int value){
    Node* newNode = new Node(value);

    newNode->next = head;

    if(head!=nullptr){
        head->prev = newNode;
    }

    return newNode;
}

Node* insertionAtEnd(Node* head, int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
    }
    else{
        Node* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }

        curr->next = newNode;

        newNode->prev = curr;

    }

    return head;
}

Node* insertionAtSpecifiPosition(Node* head, int pos, int value){
    Node* newNode = new Node(value);

    if(pos == 1){
        newNode->next = head;
        

        if(head!=nullptr){
            head->prev = newNode;
            head = newNode;
            return head;
        }
        
        return head;
    }
    Node* curr = head;

    for(int i = 1; i<pos-1 && curr != nullptr; ++i){
        curr = curr->next;
    }

    if(curr == nullptr){
        cout<<"Position is out of bounds"<<endl;
        delete newNode;
        return head;
    }

    newNode->prev = curr;
    newNode->next = curr->next;
    curr->next = newNode;

    if(newNode->next != NULL){
        newNode->next->prev = newNode;
    }
    return head;
}


int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;

    second->prev = head;
    second->next = third;
    
    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;

    cout<<"Original Linked List"<<endl;
    forwardTraversalIteratively(head);
    cout<<endl;

    cout<<"Insertion at front"<<endl;
    head = insertionAtFront(head, 10000);
    forwardTraversalIteratively(head);
    cout<<endl;

    cout<<"Insertion at end"<<endl;
    head = insertionAtEnd(head, 20000);
    forwardTraversalIteratively(head);
    cout<<endl;

    cout<<"Insertion at specific Position"<<endl;
    head = insertionAtSpecifiPosition(head, 2, 30000);
    forwardTraversalIteratively(head);
    cout<<endl;

}
