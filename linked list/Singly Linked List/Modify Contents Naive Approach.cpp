// Given a Singly linked list. The task is to modify the value of the first half of nodes such that 1st node's new value is equal to the value of the last node minus the first node's current value, 2nd node's new value is equal to the second last node's value minus 2nd nodes current value, likewise for first half nodes, then replace the second half of nodes with the initial values of the first half of nodes (values before modifying the nodes).

// Note: If the size of it is odd then the value of the middle node remains unchanged.

// Examples:

// Input: head: 10 -> 4 -> 5 -> 3 -> 6
// Output: -4 -> -1 -> 5 -> 4 -> 10

#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = nullptr;
        }
};

int countNodes(Node* head){
    int count = 0;
    Node* curr = head;

    while(curr != nullptr){
        count++;
        curr = curr->next;
    }

    return count;
}

void linkedListToVector(Node* head, vector<int>& vec){
    Node* curr = head;

    for(int i = 0; i < vec.size(); ++i){
        vec[i] = curr->data;
        curr = curr->next;
    }
}

void vectorToLinkedList(const vector<int>& vec, Node* head){
    Node* curr = head;

    for(int i = 0; i<vec.size(); ++i){
        curr->data = vec[i];
        curr = curr->next;
    }
}

void modifyVector(vector<int>& vec) {

    // Modify the vector
    for (int i = 0; i < vec.size() / 2; ++i) {
        int x = vec[i];
        vec[i] = vec[vec.size() - i - 1] - x;
        vec[vec.size() - i - 1] = x;
    }
}

Node* modifyTheList(Node* head) {
    if (!head->next) return nullptr;

    // Count the number of nodes
    int n = countNodes(head);

    // Create a vector for the linked list data
    vector<int> vec(n);

    // Convert linked list to vector
    linkedListToVector(head, vec);

    // Modify the vector
    modifyVector(vec);

    vectorToLinkedList(vec, head);

    return head;
}

void printList(Node* node) {
    Node* curr = node;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    
    // Create a hard-coded linked list
    // 10 -> 4 -> 5 -> 3 -> 6
    Node* head = new Node(10);
    head->next = new Node(4);
    head->next->next = new Node(5);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(6);

    head = modifyTheList(head);

    printList(head);

    return 0;
}