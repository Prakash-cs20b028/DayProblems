vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        
        int n=mat.size();
        int m = mat[0].size();
        
        int k1=k%m;
        vector<vector<int>> ans = mat;
        
        for(int i=0;i<n;i++)
        {
            int x = 0;
            for(int j=k1;j<m;j++)
            {
                ans[i][x] = mat[i][j];
                x++;
            }
            for(int j=0;j<k1;j++)
            {
                ans[i][x] = mat[i][j];
                x++;
            }
        }
        
        return ans;
    }


// second solution


for(int i=0;i<m;i++)
{

	reverse(mat[i].begin(),mat[i].begin()+k);
    reverse(mat[i].begin()+k,mat[i].end());
reverse(mat[i].begin(),mat[i].end());

}
 
