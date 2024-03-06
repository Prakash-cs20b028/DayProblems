vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            int m = text.size();
            int n = pattern.size();
            for(int i=0;i<m;i++)
            {
                string str = text.substr(i,n);
                if(str == pattern)
                {
                    ans.push_back(i+1);
                }
            }
            return ans;
            
        } 
