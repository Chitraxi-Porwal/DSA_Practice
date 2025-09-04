#include <iostream>
#include<bits\stdc++.h>
#define size 10
using namespace std;

class Heap
{
    public:
        int arr[size];
        int count;

        Heap(){
            count = 0;
        }

        void insertAtHeap(int d);
        void printHeap();
};

void Heap::printHeap(){
    for(int i = 0; i<count; i++){
        cout<<arr[i];
    }
}


void Heap::insertAtHeap(int d){
    if(count == size){
        cout<<"Heap Overflow"<<endl;
        return;
    }

    count++;
    arr[count] = d;

    int index = count;
    while(index>0){
        int parentIndex = index/2;

        if(parentIndex > 0 && arr[parentIndex] < arr[index]){
            swap(arr[parentIndex], arr[index]);
                index = parentIndex;
        }
        else{
            break;
        }
    }
}

int main()
{
    Heap maxHeap;

    maxHeap.insertAtHeap(60);
    maxHeap.insertAtHeap(70);
    maxHeap.insertAtHeap(50);
    maxHeap.insertAtHeap(80);

    maxHeap.printHeap();

}