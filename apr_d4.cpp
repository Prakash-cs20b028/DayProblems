int maxDepth(string s) {
        int ans = 0;
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                int size = st.size();
                ans = max(ans,size);
            }
            else if(s[i] == ')')
            {
                st.pop();
            }
            else
            {
                continue;
            }
        }
        return ans;
    } 
