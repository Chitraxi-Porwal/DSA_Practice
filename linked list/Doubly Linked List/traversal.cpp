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


void forwardTraversalRecursively(Node* head){
    if(head == nullptr){
        return;
    }

    cout<<head -> data<<"   ";

    forwardTraversalRecursively(head->next);
}


void backwardraversalIteratively(Node* tail){
    Node* curr = tail;

    while(curr != nullptr){
        cout<<curr->data<<" ";

        curr = curr->prev;
    }
}


void backwardraversalRecursively(Node* tail){
    if(tail == nullptr){
        return;
    }

    cout<< tail->data<<"   ";

    backwardraversalRecursively(tail->prev);
}


int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout<<"Forward Traversal"<<endl;
    forwardTraversalIteratively(head);
    
    cout<<"Forward Traversal"<<endl;
    forwardTraversalRecursively(head);

    cout<<endl;

    cout<<"Backward Tracersal"<<endl;
    backwardraversalIteratively(third);

    cout<<endl;

    cout<<"Backward Tracersal"<<endl;
    backwardraversalRecursively(third);

    cout<<endl;

}