int t[1001][1001];
    int solve(int i, int total, vector<int>& cost)
    {
        if(i == cost.size())
        {
            return 0;
        }
        if(t[i][total] != -1)
        {
            return t[i][total];
        }
        if(total >= cost[i])
        {   
            int ac = cost[i] - floor(0.9 * cost[i]);
            return t[i][total] = max(1 + solve(i + 1, total - cost[i] + floor(cost[i]*0.9), cost),solve(i+1,total,cost));
        }
        else
        {
            return t[i][total] = solve(i + 1, total, cost);
        }
        
    }

    int max_courses(int n, int total, vector<int>& cost) {
        
        memset(t,-1,sizeof(t));
        return solve(0, total, cost);
    } 
