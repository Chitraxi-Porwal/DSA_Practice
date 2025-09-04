#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int x){
            this->data = x;
            this->next = NULL;
        }
};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

        LinkedList(int value){
            head = new Node(value);
        }

        void printLinkedList(Node* head){
            if(head == NULL){
                cout<<"Linked List is empty";
                return;
            }
            
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout<<endl;
        }          
};

int main(){
    LinkedList list(10);

    Node* second = new Node(20);
    list.head->next = second;

    Node*third = new Node(30);
    second->next = third;
    
    list.printLinkedList(list.head);
}