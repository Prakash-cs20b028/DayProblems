int min_sprinklers(int arr[], int n)
    {
        int ans=0;
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == -1)
            {
                vp.push_back({INT_MIN,INT_MIN});
            }
            else
            {
                vp.push_back({i-arr[i],i+arr[i]});
            }
        }
        sort(vp.begin(),vp.end());
        
        int pos=0,take=0;
        while(take<n)
        {
            int completed = take-1;   //take care of completed till index.
            while(pos<n and vp[pos].first <= take)
            {
                completed = max(completed,vp[pos].second);
                pos++;
            }
            if(take < completed+1)
            {
                ans++;
                take = completed +1;
            }
            else
            {
                return -1;
            }
        }

        return ans;
    } 
