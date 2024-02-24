 
int t[1000000];
        int fun(int n)
        {
            if(n<=11)
            {
                t[n] = n;
                return n;
            }
            if(t[n] != -1)
            {
                return t[n];
            }
            int first = fun(n/2);
            int second = fun(n/3);
            int third = fun(n/4);
            
            t[n] = first+second+third;
            
            
            return t[n];
            
        }
        int maxSum(int n)
        {
            memset(t,-1,sizeof(t));
            return fun(n);
        }