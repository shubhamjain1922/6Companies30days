class Solution {
  public: 
    bool canPair(vector<int> a, int k) {
        map<int,int>m;
        int n=a.size();
        for(int i=0;i<n;i++){
            m[a[i]%k]++;
        }
        for(int i=0;i<n;i++){
            int r=a[i]%k;
            if(r==0){
                if(m[0]&1)return false;
            }
            else if(m[r]!=m[k-r])return false;
        }
        return true;
    }
}
