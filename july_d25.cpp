int findCoverage(vector<vector<int>>& matrix) {
        
        int ans = 0;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int row[] = {0,-1,0,1};
        int col[] = {-1,0,1,0};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k=0;k<4;k++)
                    {
                        int nr = i+row[k];
                        int nc = j+col[k];
                        if(nr>=0 and nr<n and nc>=0 and nc<m and matrix[nr][nc]==1)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    } 
