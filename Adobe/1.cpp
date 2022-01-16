class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> res(2,-1);
        int l=0,r=0;
        long long sum=0;
        
        while(r<n){
            
            if(sum+arr[r]==s){
                res[0]=l+1;
                res[1]=r+1;
                break;
            }
            else if(sum+arr[r]<s){
                sum+=arr[r];
                r++;
            }
            else {
                sum-=arr[l];
                l++;
            }
        }
        
        if(res[0]==-1 && res[1]==-1)
        res.pop_back();
        return res;
    }
};
