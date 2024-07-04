 
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> box;
        for (int num : nums1)
            box[num]++;
        for (int i = 0; i < nums2.size(); ++i) {
            if (box[nums2[i]] > 0) {
                res.push_back(nums2[i]);
                box[nums2[i]]--;
            } else {
                continue;
            }
        }
        return res;
    }




vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        //set<int> st;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0,m=nums1.size();
        int j=0,n=nums2.size();

        while(i<m and j<n)
        {
            if(nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
        }
        

    return ans;
    }