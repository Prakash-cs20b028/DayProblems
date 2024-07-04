ListNode* mergeNodes(ListNode* head) {
        
        if(head == NULL or head->next == NULL)
        {
            return  head;
        }
        ListNode* t = head->next;
        ListNode* dummy = new ListNode(1000);
        dummy->next = head;
        ListNode* prev = dummy;
        int sum = 0;
        
        while(t != NULL )
        {
            if(t->val != 0)
            {
                sum += t->val;
                t = t->next;
            }
            else
            {
                prev->next = new ListNode(sum);
                prev = prev->next;
                t = t->next;
                sum = 0;
                
            }
        }
        head = dummy->next;
        delete dummy;
        
        return head;
    } 
