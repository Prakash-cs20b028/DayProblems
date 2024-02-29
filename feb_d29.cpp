bool fun(TreeNode* node) 
    {
        if(node == NULL) 
        {
            return true;
        }
        queue<pair<TreeNode*, int>> q;
        q.push({node, 0});
        
        while(!q.empty()) 
        {
            vector<int> vec;
            int size = q.size();
            
            while(size-- >0) 
            {
                TreeNode* node = q.front().first;
                int level = q.front().second; q.pop();
                if(level % 2 == 0) //level is even
                {
                    if(node->val % 2 == 0 || (!vec.empty() && node->val <= vec.back())) 
                    {
                        return false;
                    }
                } 
                else  //level is odd
                {
                    if(node->val % 2 != 0 || (!vec.empty() && node->val >= vec.back())) 
                    {
                        return false;
                    }
                }
                
                vec.push_back(node->val);
                
                if(node->left != NULL) 
                {
                    q.push({node->left, level + 1});
                }
                if(node->right != NULL) 
                {
                    q.push({node->right, level + 1});
                }
                
            }
            vec.clear();
        }
        
        return true;
}

bool isEvenOddTree(TreeNode* root) {
    return fun(root);
} 
