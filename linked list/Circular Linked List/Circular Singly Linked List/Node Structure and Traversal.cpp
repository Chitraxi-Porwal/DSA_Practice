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

void traversalCicularSinglyLinkedList(Node* head) {
    if (head == nullptr)
        return;

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}


int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;

    third->next = head;

    traversalCicularSinglyLinkedList(head);
}