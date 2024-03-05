int minimumLength(string s) {

    int n = s.length();
    int i = 0, j = n - 1, ans = 0;
    string str = s;
    if(n==1){return 1;}
    while (i < j) 
    {
        if (str[i] != str[j]) 
        {
            ans = max(ans,j - i + 1);
            break;
        } 
        else 
        {
            while (i < j && str[i] == str[i + 1]) 
            {
                i++;
            }
            while (i < j && str[j] == str[j - 1]) 
            {
                j--;
            }
        }
        i++;
        j--;
        if(i==j){return 1;}
    }
    return ans;
    } 
