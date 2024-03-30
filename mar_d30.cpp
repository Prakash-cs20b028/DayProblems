// Brute force approach

int subarraysWithKDistinct(vector<int>& nums, int k) {
        set<int> st;
        int count=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            st.insert({nums[i]});
            if(st.size() == k){count++;}

            for(int j=i+1;j<n;j++)
            {
                st.insert({nums[j]});
                if(st.size() == k)
                {
                    count++;
                }
                
            }
            st.clear();
        }
        return count;
    }


// Optimal approach


 int fun(vector<int>&nums,int k)
    {
        unordered_map<int,int> mp;
        int count=0;
        int n = nums.size();
        int i=0,j=0;
        while(j<n)
        {
            mp[nums[j]]++;
            
            while(i<=j and mp.size()>k)
            {
                mp[nums[i]]--;
                if(mp[nums[i]] == 0)
                {
                    mp.erase(nums[i]);
                }
                i++;
            }
            count += j-i+1;
            j++;
        }
        
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return fun(nums,k)-fun(nums,k-1);
    }
