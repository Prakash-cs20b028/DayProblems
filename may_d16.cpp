int fun(TreeNode* root)
    {
        if(root->left == nullptr and root->right == NULL)
        {
            return root->val;
        }
        int left1 = fun(root->left);
        int right1 = fun(root->right);
        return (root->val == 2) ? left1 || right1 : left1 && right1;
        
    }
    bool evaluateTree(TreeNode* root) {
        
        int num = fun(root);
        return (num == 0)?false:true;
    } 
