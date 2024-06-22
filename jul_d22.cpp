long long ExtractNumber(string sentence) {

        long long ans = -1;
        
        int n = sentence.length();
        string str = sentence;
        
        for(int i=0;i<n;i++)
        {
            string str1 = "";
            bool flag = true;
            if(str[i]>='0' and str[i]<='9')
            {
                while(i<n and str[i] != ' ')
                {
                    if(str[i] == '9')
                    {
                        flag = false;
                    }
                    
                    str1 += str[i];    
                    i++;
                    
                } 
                if(flag)
                {
                    ans = max(ans,stoll(str1));
                    
                }
                
            }
            
        }
        return ans;
    } 
