class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int len=temperatures.size();
        stack<int> st;
        vector<int> v(len);

        for(int i=len-1; i>=0; --i)
        {
            while( !st.empty() && temperatures[i]>=temperatures[st.top()] )
            {
                    st.pop();
            }
  
            if(st.empty())
                 v[i]=0;
				 
             else
                  v[i]=(st.top()-i);
               
            st.push(i);
        }
     //  reverse(v.begin(),v.end());                       // if we had used v.push_back() instead of v[i] for assignment then we would have reversed the vector before returning
        
        return v;

    }
};