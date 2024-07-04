struct Node* removeAllDuplicates(struct Node* head) {
        
        if (head == NULL and head->next == NULL) 
        {
            return head;
        }
        
        Node *t = head;
        Node* dummy = new Node(0);
        dummy->next = head;
        Node *prev = dummy;
        
        while (t != NULL && t->next != NULL) 
        {
            if(t->data == t->next->data)
            {
                int val = t->data;
                while(t != NULL and (t->data == val))
                {
                    Node* temp = t;
                    t = t->next;
                    delete temp;
                }
                prev->next = t;
            }
            else
            {
                prev->next = t;
                prev = t;
                t = t->next;
            }
        }
        head = dummy->next;
        delete dummy;
        
        return head;
    } 
