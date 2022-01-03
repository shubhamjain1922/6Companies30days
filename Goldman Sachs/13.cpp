class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else
            {
                string curr="";
                
                while(st.top() !='['){
                    curr=st.top()+curr;
                    st.pop();
                }
                st.pop();
                string no = "";
                while(!st.empty() && isdigit(st.top())){
                    no=st.top()+no;
                    st.pop();
                }
                
                int k=stoi(no);
                while(k--){
                    for(int p=0;p<curr.size();p++)
                        st.push(curr[p]);
                }
            }
        }
        
        string res="";
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};
