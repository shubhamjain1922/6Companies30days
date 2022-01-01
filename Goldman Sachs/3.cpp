class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k<=1) return 0;
        int res=0,left=0;
        long long p=1;
        for(int i=0;i<n;i++)
        {
            p*=a[i];
            while(left<=i && p>=k){
                p/=a[left++];
            }
            res+=i-left+1;
        }
        return res;
    }
};
