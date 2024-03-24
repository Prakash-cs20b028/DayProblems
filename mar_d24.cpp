int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int ele = abs(nums[i]);
            if(nums[ele]<0)
            {
                return ele;
            }
            nums[ele] = -nums[ele];
        }
        return -1;
    } 
