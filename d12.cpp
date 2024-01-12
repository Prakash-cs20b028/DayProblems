queue<int> modifyQueue(queue<int> q, int k) {
        
        queue<int>q2;
        vector<int> vec;
        while(!q.empty() and k>0)
        {
            vec.push_back(q.front());
            q.pop();
            k--;
        }
        while(!vec.empty())
        {
            int ele = vec[vec.size()-1];
            q2.push(ele);
            vec.pop_back();
        }
        while(!q.empty())
        {
            q2.push(q.front());
            q.pop();
        }
        return q2;
    } 
