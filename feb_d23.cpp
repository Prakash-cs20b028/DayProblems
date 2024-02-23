int maxProfit(vector<int>&price){
            
            int n=price.size();
            vector<int> dp(n,0);
            int right = price[n-1];
            for(int i=n-2;i>=0;i--)
            {
                right = max(right,price[i]);
                dp[i] = max(dp[i+1],right-price[i]);
            }
            int left = price[0];
            for(int i=1;i<n;i++)
            {
                left = min(left,price[i]);
                dp[i] = max(dp[i-1],dp[i]+price[i]-left);
            }
            return dp[n-1];
        } 
