int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        unordered_map<int,vector<pair<int,int>>> mp;
        for(auto it:flights)
        {
            mp[it[0]].push_back({it[1],it[2]});
        }
        vector<int> dist(n,INT_MAX);
        dist[src] = 0;
        queue<pair<int,int>>q;
        q.push({src,0});
        int stops = 0;
        
        while(!q.empty() and stops<=k)
        {
            int qs = q.size();
            while(qs>0)
            {
                int node = q.front().first;
                int dis = q.front().second;
                q.pop();

                for(auto& it:mp[node])
                {
                    if(dis+it.second < dist[it.first])
                    {
                        dist[it.first] = dis+it.second;
                        q.push({it.first,dist[it.first]});
                    }
                }
                qs--;
            }
            stops++;
        }
        return (dist[dst] == INT_MAX)?-1:dist[dst];
    } 
