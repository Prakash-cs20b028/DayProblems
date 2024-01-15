vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        vector<vector<int>> ans(2);
        set<int>st1,st2;
        int m = matches.size();
        
        unordered_map<int,int> mp1,mp2;
        for(int i=0;i<m;i++)
        {
            mp1[matches[i][0]]++;
            mp2[matches[i][1]]++;
        }
        for(auto it1:mp1)
        {
            if(mp2.find(it1.first) == mp2.end())
            {
                st1.insert(it1.first);
            }
        }
        for(auto it2:mp2)
        {
            if(it2.second == 1)
            {
                st2.insert(it2.first);
            }
        }
        ans[0].assign(st1.begin(),st1.end());
        ans[1].assign(st2.begin(),st2.end());
        return ans;

    } 
