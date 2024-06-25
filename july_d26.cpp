void fun(TreeNode* root,int &temp)
    {
        //IBH steps
        if(root == nullptr)
        {
            return;
        }
        fun(root->right,temp);
        temp += root->val;
        root->val = temp;
        fun(root->left,temp);

    }
    TreeNode* bstToGst(TreeNode* root) {
        
        int temp = 0;
        fun(root,temp);
        return root;
    } 
