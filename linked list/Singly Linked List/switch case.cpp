#include<iostream>
#include<bits/stdc++.h>
#include <stack>
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

Node* insertNode(Node* head, int new_data){

    Node* new_node = new Node(new_data);

    if (head == nullptr) {
        cout<<"Linked list was empty and so value inserted is first node";
        return new_node;
    }

    Node* last = head;

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = new_node;

    cout<<"Value inserted at last";

    return head;
}

Node* deleteNode(Node* head){
    if (head == nullptr) {
        cout<<"Linked List is empty";
        return nullptr;
    }

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* second_last = head;
    while (second_last->next->next != nullptr) {
        second_last = second_last->next;
    }

    delete (second_last->next);

    second_last->next = nullptr;
    cout<<"Node deleted from last";


    return head;

}

void clearLinkedList(Node** head_ref){
    Node* current = *head_ref;
    Node* next;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
  
    *head_ref = nullptr;
}

bool Palindrome(Node* head)
{        
    Node* slow= head;

    stack <int> s; 

    while(slow != NULL)
    {
        s.push(slow->data);

        slow = slow->next;
    }

    while(head != NULL )
    {            
        int i=s.top();

        s.pop();
         
        if(head -> data != i)
        {
            return false;
        }

        head=head->next;
        }
        return true;
}

bool searchElement(Node* head, int key){
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == key)
            return true;
        curr = curr->next;
    }
    return false;
}

void displayAllNodes(Node* head) {
    if (head == nullptr) {
        cout << "Linked List is empty." << endl; 
        return;
    }

    cout << "Linked List elements: "; 
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; 
}

int main(){   

    int choice;
    Node* head = nullptr; 

    cout<<endl;
    cout<<" 1. Insert a node in Linked List"<<endl;
    cout<<" 2. Delete a node from a  Linked List"<<endl;
    cout<<" 3. Clear Linked List"<<endl;
    cout<<" 4. Check for Palindrome in Linked List"<<endl;
    cout<<" 5. Search in Linked List"<<endl;
    cout<<" 6. Display all elements from Linked List"<<endl;
    cout<<" 7. Exit from program"<<endl;

    while(true){

        cout<<endl;
        cout<<endl;
        cout<<"         Enter your choice   =   ";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1:
                int value;
                cout<<"Enter value to insert    =   ";
                cin>>value;

                head = insertNode(head, value);
                break;


            case 2:
                head = deleteNode(head);
                break;

            case 3:
                clearLinkedList(&head);
                cout << "Linked List cleared.";
                break;

            case 4:
                if (Palindrome(head)) {
                    cout << "Linked List is a Palindrome."; 
                } else {
                    cout << "Linked List is not a Palindrome.";
                }
                break;

            case 5:
                int key;
                cout<<"Enter key to search  =   ";
                cin>>key;

                if(searchElement(head, key)){
                    cout<<"Key found";
                }
                else{
                    cout<<"Key not found";
                }
                break;

            case 6:
                displayAllNodes(head);
                break;

            case 7:
                cout<<"Exiting from the program"<<endl;
                cout<<endl;
                clearLinkedList(&head);
                return 0;

            default:
                cout<<"Please enter a valid choice"<<endl;
        }
    }

    return 0;
}