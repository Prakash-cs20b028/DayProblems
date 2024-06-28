void Degree(vector<vector<int>>& graph, vector<long long>& temp,int n) 
    {
        vector<long long> degrees(n, 0);
        for(const auto it:graph)
        {
            degrees[it[0]]++;
            degrees[it[1]]++;
        } 
        for (int i = 0; i < n; i++) 
        {
            temp.push_back(degrees[i]);
        }
    }
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans = 0;

        vector<long long> temp;
        Degree(roads,temp,n);
        sort(temp.begin(),temp.end());

        int j=1;
        for(int i=0;i<temp.size();i++,j++)
        {
            ans += temp[i]*j;
        }

        return ans;
    } 
