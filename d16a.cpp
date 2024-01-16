int t[101][101];
    int fun(int n,int m)
    {
        if(n==0)
        {
            return 1;
        }
        if(m<n or m==0)
        {
            return 0;
        }
        if(t[m][n] != -1)
        {
            return t[m][n];
        }
        else 
        {
            return t[m][n] = fun(n-1,m/2) + fun(n,m-1);
        }
        
    }
    int numberSequence(int m, int n){
        
        memset(t,-1,sizeof(t));
        return fun(n,m);
    } 
