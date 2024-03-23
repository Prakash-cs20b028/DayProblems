vector<int> diagonalSum(Node* root) {
        
        queue<Node*> q;
        vector<int> ans;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            int sum = 0;
            while(size>0)
            {
                Node* t = q.front(); q.pop();
                
                while(t != NULL)
                {
                    sum += t->data;
                    if(t->left != NULL)
                    {
                        q.push(t->left);
                    }
                    t = t->right;
                }
                size--;
            }
            ans.push_back(sum);
        }
        return ans;
    } 
