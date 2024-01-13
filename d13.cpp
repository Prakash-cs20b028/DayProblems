 
int minSteps(string s, string t) {
        
        if(s.length() != t.length())
        {
            return 0;
        }
        unordered_map<char,int>mp1,mp2;
        int m = s.length(),n = t.length();
        for(int i=0;i<m;i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            mp2[t[i]]++;
        }
        //upto now, I have counted the number of the char.
        int count = 0;
        for(auto it2:mp2)
        {
            if(mp1.find(it2.first) != mp1.end())
            {
                int it1 = mp1[it2.first];   // be careful about here.
                if(it2.second <= it1)
                {
                    continue;
                }
                else
                {
                    count = count + it2.second-it1;
                }
            }
            else
            {
                count += it2.second;
            }
        }
        return count;
    }