class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        vector<vector<int>> res;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target=k-(arr[i]+arr[j]);
                int l=j+1,r=n-1;
                while(l<r){
                    int sum=arr[l]+arr[r];
                    if(sum<target)
                        l++;
                    else if(sum>target)
                        r--;
                    else {
                        vector<int> t(4);
                        t[0]=arr[i];
                        t[1]=arr[j];
                        t[2]=arr[l];
                        t[3]=arr[r];
                        res.push_back(t);
                        while(l<r && arr[l]==t[2]) l++;
                        while(l<r && arr[r]==t[3]) r--;
                    }
                }
                while(j+1<n && arr[j]==arr[j+1]) j++;
            }
            while(i+1<n && arr[i]==arr[i+1]) i++;
        }
        return res;
    }
};
