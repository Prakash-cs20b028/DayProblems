string fun(Node* root, unordered_map<string,int> &mp,vector<Node*>&ans)
    {
        if(root == NULL)
        {
            return "N";
        }
        string str = to_string(root->data)+","+fun(root->left,mp,ans)+","+fun(root->right,mp,ans);
        
        mp[str]++;
        if(mp[str] == 2)
        {
            ans.push_back(root);
        }
        return str;
    }
    vector<Node*> printAllDups(Node* root) 
    {
        vector<Node*> ans;
        unordered_map<string,int> mp;
        string str = fun(root,mp,ans);
        
        return ans;
    } 
