public boolean countSub(long arr[], long n)
    {
        int left=0,right=0,i=0;
        while(i<n/2)
        {
            left = 2*i+1;
            right = 2*i+2;
            if (left < n && arr[i] < arr[left]) 
            {
                return false;
            }
            if (right < n && arr[i] < arr[right]) 
            {
                return false;
            }
            i++;
        }
        return true;
    } 
