 
bool isToepliz(vector<vector<int>>& mat) {
    
    int n = mat.size();
    int m = mat[0].size();
    
    int ele = mat[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                if(mat[i][j] != ele)
                {
                    return false;
                }
            }
            
        }
    }
    return true;
}