#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*next;
        
        Node(int new_data){
            data = new_data;
            next = nullptr;
        }
};

bool searchKeyIteratively(Node*head, int key){
    Node* curr = head;

    while(curr != NULL){
        if(curr->data == key){
            return true;
        }

        curr = curr -> next;
    }
    return false;
}

bool searchKeyRecursively(Node*head, int key){
    if(head == NULL){
        return false;
    }

    if(head->data == key){
        return true;
    }

    return searchKeyRecursively(head->next, key);
}

int main(){
    Node* head = new Node(14);
    head->next = new Node(23);
    head->next->next = new Node(89);
    
    int key = 14;

    cout<<head->data;
    cout<<head->next->data;
    cout<<head->next->next->data;


    if(searchKeyRecursively(head, key)){
        cout<<"Yes";
    }
    else
        cout<<"No";





    if(searchKeyIteratively(head, key)){
        cout<<"Yes";
    }
    else
        cout<<"No";



    return 0;
}
