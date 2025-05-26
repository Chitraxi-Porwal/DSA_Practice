 int getMiddle(Node* head) {
        // code here
        Node* curr = head;
        
        int count = 0;
        while(curr != nullptr){
            count++;
            curr = curr->next;
        }
        
        int middle = (count/2) + 1;
        
        Node* temp = head;
        for(int i = 1; i<middle; ++i){
            temp = temp->next;
        }
        
        return temp->data;
    }