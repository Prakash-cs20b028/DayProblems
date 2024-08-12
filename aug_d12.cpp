int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        
        int ans = 0,count=0;
        int n1 = arr1.size(),n2 = arr2.size();
        
        if(arr1[n1-1]<=arr2[0])
        {
            return arr1[n1-1]+arr2[0];
        }
        else if(arr2[n2-1]<=arr1[0])
        {
            return arr2[n2-1]+arr1[0];
        }
        int ts = n1+n2;
        int i=0,j=0,mid1=0,mid2=0;
        
        while(i < n1 && j < n2) 
        {
            if(arr1[i] < arr2[j]) 
            {
                if(count == ts / 2 - 1) mid1 = arr1[i];
                if(count == ts / 2) mid2 = arr1[i];
                i++;
            } 
            else 
            {
                if(count == ts / 2 - 1) mid1 = arr2[j];
                if (count == ts / 2) mid2 = arr2[j];
                j++;
            }
            count++;
        }
        return mid1+mid2;  
    } 
