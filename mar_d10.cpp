string removeDuplicates(string str) {
	    set<char>st;
	    string ans = "";
	    for(int i=0;i<str.length();i++)
	    {
	        if(st.find(str[i]) == st.end())
	        {
	            st.insert(str[i]);
	            ans += str[i];
	        }
	        
	    }
	    return ans;
	} 
