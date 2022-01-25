class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=0,right=25000000;
        for(auto w:weights){
            left=max(left,w);
        }
        
        while(left<right){
            int m=left+(right-left)/2, need=1,curr=0;
            
            for(int i=0;i<weights.size() && need<=days; curr+=weights[i++]){
                if(curr+weights[i]>m)
                {
                    curr=0;
                    need++;
                }
            }
            if(need>days)
                left=m+1;
            else
                right=m;
        }
        return left;
    }
};
