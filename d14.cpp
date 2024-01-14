 vector<int> repeatedRows(vector<vector<int>> &matrix, int m, int n) 
    { 
        vector<int> ans;
        set<int> st;
        unordered_map<int,vector<int>> mp;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mp[i].push_back(matrix[i][j]);
            }
        }
        for(int i=0;i<m;i++)
        {
            vector<int> temp1;
            for(int j=0;j<n;j++)
            {
                temp1.push_back(matrix[i][j]);
            }
            
            for(auto it:mp)
            {
                if(it.second == temp1 and it.first>i)
                {
                    st.insert(it.first);
                }
            }
            temp1.clear();
        }
        ans.assign(st.begin(),st.end());
        return ans;
    } 
