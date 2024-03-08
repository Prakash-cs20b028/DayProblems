int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxi = 0,ans=0;
        for(auto it:mp)
        {
            maxi = max(maxi,it.second);

        }
        for(auto it:mp)
        {
            if(maxi == it.second)
            {
                ans += maxi;
            }
        }
        return ans;
    } 
