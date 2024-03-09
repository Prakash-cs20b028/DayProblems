char nthCharacter(string s, int r, int n) {
        
        string str1 = s;  //Always try to not use the original data. 
        string str = s;
        int len = str.length();
        while(r>0)
        {
            int i=0;int j=0;
            while(i<=len/2)
            {
                str1[j] = str[i];
                if(str[i] == '1')
                {
                    str1[j+1] = '0';
                }
                else
                {
                    str1[j+1] = '1';
                }
                i++;
                j += 2;
            }
            str = str1;
            r--;
        }
        
        return str1[n];
    } 
