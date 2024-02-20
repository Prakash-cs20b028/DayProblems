 
int fun(int i,string str,set<string>st)
    {
        if(i==str.size())
        {
            return 1;
        }
        string temp = "";
        for(int j=i;j<str.size();j++)
        {
            temp += str[j];
            if(st.find(temp) != st.end())
            {
                if(fun(j+1,str,st))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) 
    {
        set<string> st;
        for(auto it:dictionary)
        {
            st.insert(it);
        }
        return fun(0,s,st);
    }