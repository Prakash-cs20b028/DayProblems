int longSubarrWthSumDivByK(int arr[], int n, int k)
    {
        //This problem belongs to variable size sliding window
        int mx = 0;
        int i = 0, j = 0, sum = 0;
        map<int, int> mp;
        while (j < n)
        {
            sum += arr[j];
            int r = sum%k;
            
            //condn1
            if(r<0)
            {
                r = r+k;
            }
            //condn2
            if(r==0)
            {
                mx = max(mx,j-i+1);
                
            }
            else if(r>0)   //condn3
            {
                if(mp.find(r) != mp.end())
                {
                    mx = max(mx,j-mp[r]);
                }
                else
                {
                    mp[r] = j;
                }
                
            }
            j++;
        }
        return mx;
    } 
