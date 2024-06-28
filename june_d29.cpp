bool palindrome_checker(string s){
        string copy=s;
        reverse(s.begin(), s.end());
        return (s==copy);
    }
    string pattern(vector<vector<int>> &arr) {
        int n=arr.size(),m=arr[0].size();
        
        for(int j=0;j<n;j++){
        string s="";
            for(int i=0;i<m;i++){
                s+=arr[j][i]+'0';
            }
        if(palindrome_checker(s))
            return  (to_string(j)) +" R" ;
        }
        for(int j=0;j<m;j++){
        string s="";
            for(int i=0;i<n;i++){
                s+=arr[i][j]+'0';
            }
        if(palindrome_checker(s))
            return  (to_string(j) )+" C" ;
        }
        return "-1";

    } 
