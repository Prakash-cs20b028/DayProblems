void Inorder(TreeNode* root,vector<int>&temp)
    {
        if(root==nullptr)
        {
            return;
        }
        Inorder(root->left,temp);
        temp.push_back(root->val);
        Inorder(root->right,temp);
    }
    TreeNode* fun(vector<int>temp,int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
        int mid = start + (end-start)/2;

        TreeNode* n = new TreeNode(temp[mid]);
        n->left = fun(temp,start,mid-1);
        n->right = fun(temp,mid+1,end);

        return n;
    }
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int> temp;
        Inorder(root,temp);
        int n = temp.size();
        return fun(temp,0,n-1);
        
    } 
