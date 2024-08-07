void Merge(vector<int>arr1,vector<int> arr2,vector<int>&arr3,int n1,int n2)
    {
        int i=0,j=0;
        while(i<n1 and j<n2)
        {
            if(arr1[i]<arr2[j])
            {
                arr3.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                arr3.push_back(arr2[j]);
                j++;
            }
            else 
            {
                arr3.push_back(arr1[i]);
                arr3.push_back(arr2[j]);
                i++;j++;
            }
        }
        for(;i<n1;i++)
        {
            arr3.push_back(arr1[i]);
        }
        for(;j<n2;j++)
        {
            arr3.push_back(arr2[j]);
        }
    }
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        
        int n1 = arr1.size();
        int n2 = arr2.size();
        vector<int>arr3;
        Merge(arr1,arr2,arr3,n1,n2);
        
        return arr3[k-1];
    } 
