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

void printLinkedList(Node* head){
    Node* temp = head;
    
}

int main(){
    Node*first = new Node(10);  //head Node
    
    Node*second = new Node(20);
    first->next = second;
    
    Node*third = new Node(20);
    second->next = third;
    
    Node*fourth = new Node(20);
    third->next = fourth;
    
    Node*fifth = new Node(20);
    fourth->next = fifth;
}

