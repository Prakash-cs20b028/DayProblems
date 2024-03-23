vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;
        
        if(root == NULL) 
        {
            return {};
        }
        
        stack<Node*> st1;
        stack<Node*> st2;
        
        bool flag = true;
        
        st1.push(root);
        
        while(!st1.empty()) 
        {
            Node* t = st1.top();
            st1.pop();
            
            if(t != NULL) 
            {
                ans.push_back(t->data);
                
                if(flag)   //flag == true means go from left to right. 
                {
                    if(t->left) 
                    {
                        st2.push(t->left);
                    }
                    if(t->right) 
                    {
                        st2.push(t->right);
                    }
                } 
                else       // flag == false means go from right to left.
                {
                    if(t->right) 
                    {
                        st2.push(t->right);
                    }
                    if(t->left) 
                    {
                        st2.push(t->left);
                    }
                }
            }
            
            if(st1.empty()) 
            {
                flag = !flag;  //changing the flag from true to false or false to true.
                swap(st1, st2);
            }
        }
        
        return ans;
    } 
