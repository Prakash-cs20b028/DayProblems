// this is the first solution.
 
string maximumOddBinaryNumber(string s) {

    sort(s.rbegin(),s.rend());
    int n = s.length();
    for(int i=n-1;i>=0;i--)
    {
        if(s[i] == '1')
        {
            swap(s[i],s[n-1]);
            break;
        }
    }
    return s;
}


// this is the second solution.

string maximumOddBinaryNumber(string s) {

        int count1=0,count0=0;
        for(char ch:s)
        {
            if(ch == '1'){count1++;}
            else if(ch == '0'){count0++;}
        }
        string ans = string(count1-1,'1')+string(count0,'0')+'1';
        return ans;
}