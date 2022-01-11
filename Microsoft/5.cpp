class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<int> st;
       vector<int> res(n,1);
       st.push(0);
       
       for(int i=1;i<n;i++){
           while(!st.empty() && price[i]>=price[st.top()]){ 
               st.pop();
           }
           int ans=st.empty()? i+1:i-st.top();
           
           res[i]=ans;
           st.push(i);
       }
       return res;
    }
};
