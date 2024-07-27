int t[501][501]; // this line used in memoisation
    
    void LPS(string str1,string str2)
    {
        //initialisation
        int n = str1.length();
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j] = 0;
                }
            }
        }
        
        //implementation
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str1[i-1] == str2[j-1])
                {
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else
                {
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    int countMin(string str){
        
        int n = str.length();
        string str1 = str;
        reverse(str.begin(),str.end());
        
        //string str2(str.begin(),str.end());
        
        // cout<<str1<<" "<<str;
        LPS(str1,str);
        
        return n-t[n][n];
    } 
