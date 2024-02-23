double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int,vector<pair<int,double>>>mp;
        int i=0;
        for(auto it:edges)
        {
            mp[it[0]].push_back({it[1],succProb[i]});
            mp[it[1]].push_back({it[0],succProb[i]});
            i++;
        }
        vector<double> dist(n,INT_MIN);
        dist[start_node] = 1.0;
        queue<pair<int,double>> q;
        q.push({start_node,1.0});

        while(!q.empty())
        {
            int qs = q.size();
            while(qs>0)
            {
                int node = q.front().first;
                double dis = q.front().second;
                q.pop();
                
                for(auto& it:mp[node])
                {
                    if(dis*it.second > dist[it.first])
                    {
                        dist[it.first] = dis*it.second;
                        q.push({it.first,dist[it.first]});
                    }
                }
                qs--;
            }
        }
        return (dist[end_node] == INT_MIN)? 0.0:dist[end_node];
    } 
