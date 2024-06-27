int findCenter(vector<vector<int>>& edges) {
        
        int first = edges[0][0];
        int sec = edges[0][1];
        int third = edges[1][0];
        int forth = edges[1][1];

        if(first == third or first == forth)
        {
            return first;
        }
        else
        {
            return sec;
        }
    } 
