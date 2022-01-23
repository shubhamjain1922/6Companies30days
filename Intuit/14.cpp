class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int res=0,n=grid.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        
        vector<int> dir={0,1,0,-1,0};
        
        while(!q.empty()){
            int s=q.size();
            int l=0;
            for(int i=0;i<s;i++){
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int nr=r+dir[k];
                    int nc=c+dir[k+1];
                    if(nr>=0 && nc>=0 &&nr<n &&nc<n &&grid[nr][nc]==0 && vis[nr][nc]==0){
                        l=1;
                        vis[nr][nc]=1;
                        q.push({nr,nc});
                    }
                }
            }
            res+=l;
        }
        return res==0?-1:res;
    }
};
