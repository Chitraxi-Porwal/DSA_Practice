#include<iostream>
using namespace std;

class Node{
    
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        prev = next = nullptr;
    }
};