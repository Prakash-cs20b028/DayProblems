bool isIsomorphic(string s, string t) {
        
        map<char,int> mp1,mp2;
        
        if(s.length() != t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            int ss = s[i];
            int st = t[i];
            if(mp1.find(ss) == mp1.end() && mp2.find(st) == mp2.end())
            {
                mp1[ss] = st;
                mp2[st] = ss;
            }
            else
            {
                if(mp1[ss] != st or mp2[st] != ss)
                {
                    return false;
                }
            }
        }
        return true;
    } 
