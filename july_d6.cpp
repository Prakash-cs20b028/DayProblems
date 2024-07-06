int passThePillow(int n, int time) {
        
        
        int k = time/(n-1);
        if(k%2 == 0)
        {
            return time%(n-1)+1;
        }
        else
        {
            return n-time%(n-1);
        }
    } 
