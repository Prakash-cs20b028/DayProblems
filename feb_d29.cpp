 
long long sumBitDifferences(int arr[], int n) {
	    long long ans = 0;
	    //One approach is the brute force which preferrably takes o(n^2) time.
	    //So, we delve towards the other solution. Now, we arrange all the number in a column
	    //Start from the 0th position, count num of 1's and 0's, multiply by 2 and store the answer in some variable and go till 31th bit.
	    for(int i=0;i<32;i++)
	    {
	        long long temp=0; // which will count num of set bit
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]&(1<<i))
	            {
	                temp++;
	            }
	        }
	        ans += 2*temp*(n-temp);
	    }
	    return ans;
	}