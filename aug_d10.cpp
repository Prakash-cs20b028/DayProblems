void dfs(int row,int col,vector<vector<int>>&matrix,int *rows,int *cols)
    {
        matrix[row][col] = 1;
        for(int k=0;k<4;k++)
        {
            int r = row + rows[k];
            int c = col + cols[k];

            if(r>=0 and r<matrix.size() and c>=0 and c<matrix.size() and matrix[r][c] == 0)
            {
                matrix[r][c] = 1;
                dfs(r,c,matrix,rows,cols);
            }
        }
            
        
    }
    int regionsBySlashes(vector<string>& grid) {
        
        int ans = 0;
        int n = grid.size();
        vector<vector<int>>matrix(n*3,vector<int>(n*3,0));
        int rows[] = {0,1,0,-1};
        int cols[] = {1,0,-1,0};
       
        //1st step, Building the matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int row = i*3;
                int col = j*3;
                if(grid[i][j] == '/')
                {
                    matrix[row][col+2] = 1;
                    matrix[row+1][col+1] = 1;
                    matrix[row+2][col] = 1;
                }
                else if(grid[i][j] == '\\')
                {
                    matrix[row][col] = 1;
                    matrix[row+1][col+1] = 1;
                    matrix[row+2][col+2] = 1;
                }
                
            }
        }
        //Print(matrix);
        //2nd step find the component;
        for(int i=0;i<n*3;i++)
        {
            for(int j=0;j<n*3;j++)
            {
                if(matrix[i][j] == 0)
                {
                    dfs(i,j,matrix,rows,cols);
                    ans++;
                }
            }
        }
        return ans;
    } 
