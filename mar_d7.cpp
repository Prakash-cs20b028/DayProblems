 
ListNode* middleNode(ListNode* head) {
        
        if(head == NULL){return NULL;}
        ListNode* fast=head;
        ListNode* slow=head;
        if(fast->next == NULL){return slow;}
        if(fast->next->next == NULL){return slow->next;}
        while(fast->next != NULL and fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast->next == NULL)
            {
                return slow;
            }
            else if(fast->next->next == NULL)
            {
                return slow->next;
            }
            
        }
        return slow;
    }