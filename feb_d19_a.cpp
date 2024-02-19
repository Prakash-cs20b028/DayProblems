bool isPowerOfTwo(int n) {
        
        if(n==0){return false;}
        if(n==1)
        {
            return true;
        }
        return (n%2==0) and isPowerOfTwo(n/2);
        
        
    }


bool isPowerOfTwo(int n) {
        
        if(n==0)
        {
            return false;
        }
        while(n%2==0)
        {
            n = n/2;
        }
        return (n==1)?true:false;
        
    }

 
