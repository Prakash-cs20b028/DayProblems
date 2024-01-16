 
unordered_set<int> st;
    
public:
    RandomizedSet() {
        // RandomizedSet obj;
    }
    
    bool insert(int val) {
        if(st.find(val) != st.end())
        {
            return false;
        }
        else
        {
            st.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(st.find(val) != st.end())
        {
            st.erase(val);
            return true;
        }
        else
        {
            return false;
        }
    }
    
    int getRandom() {
        
        int random = rand()% st.size();
        auto ans = next(st.begin(),random);
        return *ans;
        
    }