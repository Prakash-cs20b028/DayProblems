int bagOfTokensScore(vector<int>& arr, int power) {
        sort(arr.begin(),arr.end());

        int n = arr.size();
        if(n==1)
        {
            if(power<arr[0])
            {
                return 0;
            }
        }
        int i=0,j=n-1,s=0,ans=0;
        while(i<=j)
        {
            if(power>=arr[i])
            {
                power -= arr[i];
                s++;
                ans = max(ans,s);
                i++;
            }
            else if(s>0)
            {
                s--;
                power += arr[j];
                j--;
                ans = max(ans,s);
            }
            else
            {
                return 0;
            }
        }
        return ans;
    }