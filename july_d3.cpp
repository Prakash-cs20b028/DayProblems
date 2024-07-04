 
int minDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        if(n<=4){return 0;}
        int ans = nums.back()-nums[0];

        for(int i=0;i<=3;i++)
        {
            ans = min(ans,nums[n-1-(3-i)]-nums[i]);
        }
        return ans;
    }