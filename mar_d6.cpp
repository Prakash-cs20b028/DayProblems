bool hasCycle(ListNode *head) {
        
        ListNode* t = head;
        if(t==NULL){return false;}
        unordered_map<ListNode*,int> mp;
        int pos = 0;
        
        while(t!=NULL)
        {
            if(mp.find(t) == mp.end())
            {
                mp.insert({t,pos});
                t = t->next;
                pos++;
            }
            else
            {
                return true;
            }

        }
        return false;
    } 
