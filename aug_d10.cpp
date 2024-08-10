Node* rotate(Node* head, int k) {
        
        Node *tail=head,*t = head;
        //The base case, in everylinked list problem, this part is important
        if(head == nullptr or head->next == nullptr)
        {
            return head;
        }
        while(t->next != NULL)
        {
            t = t->next;
        }
        tail = t;
        
        while(k>0)
        {
            Node* temp = head;
            head = head->next;
            //cout<<"The value of head is "<<head->data<<" and ";
            temp->next = nullptr;
            tail->next = temp;
            tail = tail->next;
            //cout<<"The value of tail is "<<tail->data<<endl;
            tail->next = nullptr;
            
            k--;
            //delete(temp);
        }
        return head;
    } 
