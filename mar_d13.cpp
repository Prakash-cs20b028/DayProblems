public int pivotInteger(int n) {
        int sum1 = 0;
        int sum2 = n*(n+1)/2 - 1;

        if(n==1){return 1;}
        for(int i=2;i<=n;i++)
        {
            sum1 = i*(i-1)/2;
            sum2 = sum2 - i;
            if(sum1 == sum2)
            {
                return i;
            }
        }
        return -1;
    } 
