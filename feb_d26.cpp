vector<string> ans;
	    void fun(string str,int n)
	    {
	        int high = 1<<n;
	        for(int i=0;i<high;i++)
	        {
	            string temp="";
	            
	            for(int j=0;j<n;j++)
	            {
	                
	                if((i&(1<<j)) != 0)
	                {
	                    temp += str[j];
	                   
	                }
	                
	            }
	            ans.push_back(temp);
	           
	        }
	    }
		vector<string> AllPossibleStrings(string s){
		    
		    
		    fun(s,s.length());
		    sort(ans.begin(),ans.end());
		    ans.erase(ans.begin()+0);
		    return ans;
		}

//recursion version

vector<string> ans;
	    void fun(string str,string output)
	    {
	        if(str.length() == 0)
	        {
	            ans.push_back(output);
	            return;
	        }
	        else
	        {
	            string str1=output;  //str1 left side
	            string str2=output;  //str2 right side
	            
	            str2.push_back(str[0]);
	            str.erase(str.begin()+0);
	            fun(str,str1);
	            fun(str,str2);
	        }
	    }
		vector<string> AllPossibleStrings(string s){
		    
		    string out = "";
		    fun(s,out);
		    sort(ans.begin(),ans.end());
		    ans.erase(ans.begin()+0);
		    return ans;
		}
