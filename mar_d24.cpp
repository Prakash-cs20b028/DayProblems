public Stack<Integer> insertAtBottom(Stack<Integer> st, int x) {
        
        Stack<Integer>st1 = new Stack<>();
        
        while(!st.empty())
        {
            st1.push(st.peek());
            st.pop();
        }
        st.push(x);
        while(!st1.empty())
        {
            st.push(st1.peek());
            st1.pop();
        }
        return st;
    } 
