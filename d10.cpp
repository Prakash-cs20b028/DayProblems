void MakeGraph(map<int,vector<int>> &mp,TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left)
        {
            mp[root->val].push_back(root->left->val);
            mp[root->left->val].push_back(root->val);
        }
        if(root->right)
        {
            mp[root->val].push_back(root->right->val);
            mp[root->right->val].push_back(root->val);
        }

        MakeGraph(mp,root->left);
        MakeGraph(mp,root->right);
    }
    void BFS(map<int, vector<int>> mp, int &ans, int start) 
    {
    unordered_set<int> st;
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) 
    {
        ans++;
        for(int i=q.size();i>0;i--)
        {
            int p = q.front();
            q.pop();
            for (int it:mp[p]) 
            {
                if(st.find(it) == st.end())
                {
                    q.push(it);
                }
                
            }
            st.insert(p);
        }              
        
    }
}
    int amountOfTime(TreeNode* root, int start) {
        
        //This question plays in two parts. The first one is to convert it into graph and the second part is to use bfs to get the answer.
        map<int,vector<int>> mp;
        MakeGraph(mp,root);
        int ans = -1;
        // for(auto it: mp)
        // {
        //     cout<<it.first<<"->";
        //     for(int i=0;i<it.second.size();i++)
        //     {
        //         cout<<mp[it.first][i]<<" ";
        //     }
        //     cout<<endl;
        // }

        //Now use bfs algorithm
        BFS(mp,ans,start);
        return ans;
    } 
