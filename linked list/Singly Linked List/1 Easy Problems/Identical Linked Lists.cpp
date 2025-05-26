 bool areIdentical(struct Node *head1, struct Node *head2) {
        if(head1 == nullptr){
            if(head2 == nullptr){
                return true;
            }
        }
        while(head1 != nullptr && head2 != nullptr){
            if(head1->data == head2->data){
                head1 = head1->next;
                head2 = head2->next;
            }
            else{
                return false;
            }
        }
        return true;
    }