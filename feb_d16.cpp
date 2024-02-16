 
bool static compare(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;   
        for(auto it:arr)
        {
            mp[it]++;
        }
        vector<pair<int,int>> vp(mp.begin(),mp.end());
        sort(vp.begin(),vp.end(),compare);

        int count = 0;
        for(auto it:vp)
        {
            if(k>=it.second)
            {
                count++;
                k -= it.second;
            }
            else
            {
                break;
            }
        }
        return vp.size()-count;
    }