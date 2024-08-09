int mod = 1e9+7;
    int Maximize(vector<int> &arr) {
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        long long sum = 0;
        for(long long i=0;i<n;i++)
        {
            sum = (sum+arr[i]*i)%mod;
            
        }
        return sum%mod;
    } 
