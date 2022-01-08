class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        int i=0,j=0,m=0;
        for(;j<k-1;j++){
            m=max(m,arr[j]);
        }
        vector<int> res;
        while(j<n){
            m=max(m,arr[j]);
            res.push_back(m);
            if(m==arr[i]){
                m=0;
                for(int l=i+1;l<=j;l++)
                    m=max(m,arr[l]);
            }
            i++;
            j++;
        }
        return res;
    }
};
