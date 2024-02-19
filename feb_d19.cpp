int GetAns(priority_queue<pair<int,char>> pq)
    {
        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top().first*pq.top().first;
            pq.pop();
        }
        return ans;
    }
    void fun(priority_queue<pair<int,char>> &pq,int k) 
    {
        
        while(k--) 
        { 
            pair<int,char> p = pq.top();
            pq.pop();
            p.first--;
            pq.push(p);
        }
        
    }
    int minValue(string s, int k){
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        
       fun(pq,k);
       return GetAns(pq);
    } 
