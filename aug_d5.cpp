string kthDistinct(vector<string>& arr, int k) {
        
        string ans = "";
        unordered_map<string,int> mp;
        
        for(auto it:arr)
        {
            mp[it]++;
        }
        for(auto it:arr)
        {
            if(mp[it] == 1)
            {
                k--;
                if(k==0)
                {
                    return it;
                }
            }
        }
        return "";
    } 
