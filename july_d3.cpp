bool Palindrome(string str)
    {
        int n=str.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(str[i] != str[j])
            {
                return false;
            }
            i++;j--;
        }
        return true;
    }
    bool compute(Node* head) {
        
        string str = "";
        while(head != NULL)
        {
            str += head->data;
            head = head->next;
        }
        // cout<<str;
        return Palindrome(str);
    } 
