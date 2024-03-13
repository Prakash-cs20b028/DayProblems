vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        vector<int> ans;
        int m=mat.size();
        int n=mat[0].size();
        stack<int> st;
        
        //first part
        for(int j=0;j<n;j++)
        {
            int y=j;
            if(y%2 !=0) //odd
            {
                for(int x=0;y>-1 and x<m;x++,y--)
                {
                    ans.push_back(mat[x][y]);
                }
            }
            else  //even
            {
                for(int x=0;y>-1 and x<m;x++,y--)
                {
                    st.push(mat[x][y]);
                }
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }
        //second part
        int y=n-1;  // y is used to govern which direction we have to go. In reality, evertime we are going down only but in case of buttom up, we use stack to meet the requirement
        for(int i=1;i<m;i++)
        {
            int x=i;
            if(y&1 != 0 and y>-1) 
            {
                
                for(int y1=n-1;y1>-1 and x<m;x++,y1--)
                {
                    st.push(mat[x][y1]);
                }
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
            else
            {
                for(int y1=n-1;y1>-1 and x<m;x++,y1--)
                {
                    ans.push_back(mat[x][y1]);
                }
            }
            y--;
        }
        return ans;
    } 
