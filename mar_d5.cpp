 
int maxIndexDiff(int arr[], int n) 
    { 
        int ans=0;
        vector<int>vec1(n),vec2(n);
        int maxi = 0;
        for(int i=n-1;i>=0;i--)
        {
            maxi = max(maxi,arr[i]);
            vec1[i] = maxi;
        }
        int mini = arr[0];
        for(int i=0;i<n;i++)
        {
            mini = min(mini,arr[i]);
            vec2[i] = mini;
        }
        // Main implementation. Assume j for vec1 and i for vec2;
        int i=0,j=0;
        while(i<n and j<n)
        {
            if(vec2[i]<=vec1[j])
            {
                ans = max(ans,j-i);
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }