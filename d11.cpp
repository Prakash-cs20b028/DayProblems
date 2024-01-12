string removeKdigits(string str, int k) {
        int n=str.length();
        stack<int>st;
        st.push(str[0]-'0');
        
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && k>0 && st.top()>(str[i]-'0'))
            {
                st.pop();
                k--;
            }
            st.push(str[i]-'0');
        }
        
        while(!st.empty() and k>0)
        {
            st.pop();
            k--;
        }
        if(st.empty() or k>0)
        {
            return "0";
        }
        string ans = "";
        while(!st.empty())
        {
            //cout<<(st.top())<<" ";
            ans += to_string(st.top());
            st.pop();
        }
        
        for(int i=ans.size()-1;i>0;i--)
        {
            if((ans[i]-'0') == 0)
            {
                ans.pop_back();
            }
            else
            {
                break;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    } 
