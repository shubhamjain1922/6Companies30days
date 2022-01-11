class Solution
{
    public:
    void help(int a[],vector<string> &res, vector<vector<char>>& dp, string &t,int ind,int n){
        if(ind==n){
            res.push_back(t);
            return;
        }
        for(int i=0;i<dp[a[ind]].size();i++){
            t.push_back(dp[a[ind]][i]);
            help(a,res,dp,t,ind+1,n);
            t.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int n)
    {
        vector<string> res;
        vector<vector<char>> dp(2,vector<char>());
        dp.push_back({'a','b','c'});
        dp.push_back({'d','e','f'});
        dp.push_back({'g','h','i'});
        dp.push_back({'j','k','l'});
        dp.push_back({'m','n','o'});
        dp.push_back({'p','q','r','s'});
        dp.push_back({'t','u','v'});
        dp.push_back({'w','x','y','z'});
        string t="";
        help(a,res,dp,t,0,n);
        return res;
    }
};
