public int numSubarraysWithSum(int[] nums, int goal) {
        int n = nums.length;
        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            int sum1 = nums[i];
            if(sum1 == goal){ans++;}
            for(int j=i+1;j<n;j++)
            {
                sum1 += nums[j];
                if(sum1 == goal)
                {
                    ans++;
                }
            }
        }
        
        return ans;
    } 
