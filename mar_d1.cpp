int fun(int* arr,int low,int high,int n)
	{
	    if(n==1){return 0;}
	    while(low<=high)
	    {
	        int mid = (low+high)/2;
	        
            if((mid == 0 or arr[mid]>=arr[mid-1]) and (mid==n-1 or arr[mid]>=arr[mid+1]))
	        {
	            return mid;
	        }
	        else if(arr[mid]<arr[mid-1])
	        {
	            high=mid-1;
	        }
	        else if(arr[mid]<arr[mid+1])
	        {
	            low = mid+1;
	        }
    	        
	    }
	    return 0;
	    
	}
	int peakElement(int arr[],int n)
    {
        return fun(arr,0,n-1,n);
    } 
