string customSortString(string order, string s) {
        int n1 = order.length();
        int n2 = s.length();
        string ans = "";
        int i=0,j=0;
        unordered_map<char,int> mp;
        for(auto ch:s)
        {
            mp[ch]++;
        }
        while(i<n1)
        {
            if(mp.find(order[i]) != mp.end())
            {
                ans.append(mp[order[i]],order[i]);
                mp.erase(order[i]);
                
            }
            i++;
        }
        for(auto it:mp)
        {
            ans.append(it.second,it.first);
        }
        return ans;
    } 
