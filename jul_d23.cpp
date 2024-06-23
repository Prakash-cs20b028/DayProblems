vector<int> bracketNumbers(string str) {
        
        int n = str.size();
        vector<int> ans,temp;
        
        int place = 0;
        for(int i=0;i<n;i++)
        {
            if(str[i] == '(')
            {
                place++;
                ans.push_back(place);
                temp.push_back(place);
            }
            else if(str[i] == ')')
            {
                ans.push_back(temp.back());
                temp.pop_back();
            }
        }
        return ans;
    } 
