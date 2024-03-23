void reorderList(ListNode* head) {
        
        ListNode* t = head;
        vector<ListNode*> vec;
        while(t != NULL)
        {
            vec.push_back(t);
            t = t->next;
        }
        int i=0,j=vec.size()-1;
        while(i<j)
        {
            vec[i]->next = vec[j];
            i++;
            if(i==j){break;}
            vec[j]->next = vec[i];
            j--;
        }
        vec[j]->next = nullptr;
    } 
