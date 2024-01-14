bool closeStrings(string word1, string word2) 
    {
        if(word1.length()!=word2.length())
        {
            return false;
        }
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<word1.length();i++)
        {
            mp1[word1[i]]++;
        }
        for(int i=0;i<word2.length();i++)
        {
            mp2[word2[i]]++;
        }
        //Below operation is used to check the validity of each char in another map. If it is not there then return false.
        for(auto it:mp1)
        {
            if(mp2.count(it.first) == 0)
            {
                return false;
            }
        }
        unordered_map<int,int>mp;
        for(auto it:mp1)
        {
            mp[it.second]++;
        }
        for(auto it:mp2)
        {
            if(mp.count(it.second) != 0)
            {
                mp[it.second]--;
                if(mp[it.second]==0)
                {
                    mp.erase(it.second);
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    } 
