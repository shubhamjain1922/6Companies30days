class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n,0);
        dp[0]=arr[0];
        dp[1]=max(arr[1],arr[0]);
        for(int i=2;i<n;i++){
            dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
        }
        
        return dp[n-1];
    }
};
