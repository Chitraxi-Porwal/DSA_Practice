DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode* curr = head;
        
        if(curr == nullptr){
            return nullptr;
        }
        
        swap(curr->prev, curr->next);
        
        if(curr->prev == nullptr){
            return curr;
        }
        
        return reverseDLL(curr->prev);
    }






// ✅ Purpose of if (curr->prev == nullptr)
// After swapping, the original tail node becomes the new head, because all links have been reversed. For that node:

// Before swap:

// prev = second-to-last node

// next = nullptr

// After swap:

// prev = nullptr

// next = second-to-last node

// Thus, when you reach the original tail, after the swap its prev becomes nullptr, and this indicates:

// 🟢 “This node is now the new head of the reversed list.”