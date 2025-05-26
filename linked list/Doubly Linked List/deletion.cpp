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


Node* deletionAtFront(Node* head){
    if(head == nullptr){
        return nullptr;
    }

    Node* temp = head;
    head = head->next;

    if(head != nullptr){
        head->prev = nullptr;
    }

    delete temp;
    return head;
}

Node* deletionAtEnd(Node* head){
    if(head == nullptr){
        return nullptr;
    }
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }

    curr->prev->next = nullptr;
    delete curr;

    return head;
}

Node* deletionAtSpecifiPosition(Node* head, int pos){
    if(head == nullptr){
            return nullptr;
        }

    Node* curr = head;

    for(int i = 1; curr != nullptr && i<pos; ++i){
        curr = curr->next;
    }

    if(curr == nullptr){
        return head;
    }

    if(curr->prev != nullptr){
        curr->prev->next = curr->next;
    }

    if(curr -> next != nullptr){
        curr -> next -> prev = curr->prev;
    }

    if(head == curr){
        head = curr->next;
    }

    delete curr;
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

    cout<<"deletion at front"<<endl;
    head = deletionAtFront(head);
    forwardTraversalIteratively(head);
    cout<<endl;

    cout<<"deletion at end"<<endl;
    head = deletionAtEnd(head);
    forwardTraversalIteratively(head);
    cout<<endl;

    cout<<"deletion at specific Position"<<endl;
    head = deletionAtSpecifiPosition(head, 2);
    forwardTraversalIteratively(head);
    cout<<endl;

}
