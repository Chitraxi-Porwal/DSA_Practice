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


Node* reverseLinkedList(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while(curr != nullptr){

        next = curr -> next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}


void printList(Node *node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
}


int main() {
    Node* head = new Node(10);
    head->next = new Node(4);
    head->next->next = new Node(5);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(6);

    printList(head);

    cout<<endl;

    head = reverseLinkedList(head);

    printList(head);

    return 0;
}