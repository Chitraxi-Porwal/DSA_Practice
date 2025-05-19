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

Node* deletionBeginning(Node*head){

    if(head == NULL){
        return nullptr;
    }

    Node*temp = head;

    head = head->next;

    delete temp;

    return head;
}

Node* deletionSpecificPosition(Node*head, int pos){
    Node* prev;
    Node* temp = head;

    if (temp == NULL)
        return head;

    if (pos == 1) {
        head = temp->next;
        free(temp);
        return head;
    }

    for (int i = 1; i != pos; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    else {
        cout << "Data not present\n";
    }

    return head;
}

Node* deletionEnding(Node*head){
    if(head == nullptr){
        return nullptr;
    }

    if(head -> next == nullptr){
        delete head;
        return nullptr;
    }

    Node* secondLast = head;
    
    while(secondLast->next->next != nullptr){
        secondLast = secondLast -> next;
    }

    delete(secondLast -> next);

    secondLast->next = nullptr;

    return head;  
}

Node* deletionByValue(Node*head, int value){
    if(head == nullptr){
        return nullptr;
    }

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;

    while(current->next != nullptr && current->next->data != value){
        current = current->next;
    }

    if(current->next != nullptr){
        Node*temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    return head;
}

Node* deleteAllOccurrences(Node* head, int value) {
    // Handle deletion from the beginning (head nodes)
    while (head != nullptr && head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Now handle the rest of the list
    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->data == value) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }

    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);


    cout<<"Original List";
    traverseListIteratively(head);

    cout<<"deletion at beginning of List";
    head =  deletionBeginning(head);
    traverseListIteratively(head);

    cout<<"deletion at specific position of List";
    head = deletionSpecificPosition(head, 2);
    traverseListIteratively(head);
  
    cout<<"deletion at end of List";
    head = deletionEnding(head);
    traverseListIteratively(head);

    cout<<"deletion by value";
    head = deletionByValue(head, 30);
    traverseListIteratively(head);


    return 0;
}