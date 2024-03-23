 vector<int> Series(int n) {
        
        vector<int> ans;
        int mod = 1e9+7;
        
        if(n==0){ return {0};}
        if(n==1){return {0,1};}
        
        ans.push_back(0);
        ans.push_back(1);
        
        
        for(int i=2;i<=n;i++)
        {
            int first = ans[i-1];
            int sec = ans[i-2];
            ans.push_back((first+sec)%mod);
            
        }
        return ans;
    }
