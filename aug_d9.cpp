int fun(Node* root,bool &flag)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL and root->right == NULL)
        {
            return root->data;
        }
        int ls = fun(root->left,flag);
        int rs = fun(root->right,flag);
        
        int sum = ls + rs;
        if(sum != root->data)
        {
            flag = false;
            
        }
        return sum+root->data;
    }
    bool isSumTree(Node* root) {
        
        if(root == NULL)
        {
            return true;
        }
        bool flag = true;
        
        fun(root,flag);
        return (flag==true)?true:false;
    } 
