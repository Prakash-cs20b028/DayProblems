int DivisibleByEight(string s){
        
        if(s.length()<=3)
        {
            int temp = 0;
            temp += stoi(s);
            if(temp%8 == 0){return 1;}
        }
        else
        {
            int temp = 0;
            int n = s.length();
            temp += stoi(s.substr(n-3,n));
            
            if(temp % 8 == 0){return 1;}
        }
        return -1;
    } 
