int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //use the merging technique
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ans = -1;
        int i=0,j=0;
        while(i<n1 and j<n2)
        {
            if(nums1[i]>nums2[j])
            {
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                ans = nums1[i];
                break;
            }
        }
        return ans;
    } 
