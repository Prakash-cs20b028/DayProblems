long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) 
    {
        const int ALPHABET_SIZE = 26;
        vector<vector<long long>> dist(ALPHABET_SIZE, vector<long long>(ALPHABET_SIZE, LLONG_MAX));

        for (int i = 0; i < ALPHABET_SIZE; i++) 
        {
            dist[i][i] = 0;
        }

        for (int i = 0; i < original.size(); i++) 
        {
            int u = original[i] - 'a';
            int v = changed[i] - 'a';
            dist[u][v] = min(dist[u][v], static_cast<long long>(cost[i]));
        }

        for (int k = 0; k < ALPHABET_SIZE; k++) 
        {
            for (int i = 0; i < ALPHABET_SIZE; i++) 
            {
                for (int j = 0; j < ALPHABET_SIZE; j++) 
                {
                    if (dist[i][k] != LLONG_MAX && dist[k][j] != LLONG_MAX) 
                    {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        long long ans = 0;
        for (int i = 0; i < source.size(); i++) 
        {
            if (source[i] != target[i]) 
            {
                int srcIdx = source[i] - 'a';
                int tgtIdx = target[i] - 'a';
                if (dist[srcIdx][tgtIdx] == LLONG_MAX) 
                {
                    return -1;
                }
                ans += dist[srcIdx][tgtIdx];
            }
        }

    return ans;
}
 
