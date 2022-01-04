class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0;
        int sum=0,t=INT_MAX;
        while(r<nums.size()){
            if(sum<target)sum+=nums[r];
            r++;
            while(sum>=target){
                t=min(t,r-l);
                sum-=nums[l];
                l++;
            }
        }
        return t==INT_MAX?0:t;
    }
};
