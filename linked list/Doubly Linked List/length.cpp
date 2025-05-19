#include <iostream>
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

int lengthDoublyLinkedList(Node* head){
    int count = 0;

    Node* curr = head;

    while(curr != nullptr){
        count++;

        curr = curr->next;
    }

    return count;
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;

    cout<<"Length of Linked List is:  ";

    int length;
    length = lengthDoublyLinkedList(head);

    cout<<length;

    cout<<endl;
    
    cout<<lengthDoublyLinkedList(head);

}