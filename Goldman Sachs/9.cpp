class Solution {
  public : 
    string printMinNumberForPattern(string s){
        string res="";
        stack<int> st;
        int num=1;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                st.push(num++);
            }
            else
            {
                st.push(num++);
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num++);
        while(!st.empty()){
            res+=to_string(st.top());
            st.pop();
        }
        
        return res;
    }
}
