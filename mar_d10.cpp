 
public int[] intersection(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        Set<Integer> st = new HashSet();
        
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                st.add(nums1[i]);
                i++;j++;
            }
        }
        int n3 = st.size();int k=0;
        int ans[] = new int[n3];
        for(Integer it:st)
        {
            ans[k++] = it;
        }
        return ans;
    }