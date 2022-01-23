class Solution {
public:
    int findCircleNum(vector<vector<int>>& isc) {
        int n=isc.size();
        vector<vector<int>> alt(n,vector<int>());
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isc[i][j]==1)
                    alt[i].push_back(j);
            }
        }
        
        vector<int> vis(n,-1);
        int res=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                res++;
                vis[i]=1;
                q.push(i);
                while(!q.empty()){
                    int a=q.front();
                    q.pop();
                    for(auto k:alt[a]){
                        if(vis[k]==-1){
                            vis[k]=1;
                            q.push(k);
                        }
                    }
                }
            }
        }
        return res;
    }
};
