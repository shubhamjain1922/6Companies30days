class Solution {
public:
    void dfs(vector<vector<int>>&heights,vector<vector<int>>&vis,int i,int j) {
        int m=heights.size();
        int n=heights[0].size();
        vis[i][j]=1;
        
        if(i-1>=0 && vis[i-1][j]!=1 && heights[i-1][j]>=heights[i][j])
            dfs(heights,vis,i-1,j);
        
        if(i+1<m && vis[i+1][j]!=1 && heights[i+1][j]>=heights[i][j])
            dfs(heights,vis,i+1,j);
        
        if(j-1>=0 && vis[i][j-1]!=1 && heights[i][j-1]>=heights[i][j])
            dfs(heights,vis,i,j-1);
        
        if(j+1<n && vis[i][j+1]!=1 && heights[i][j+1]>=heights[i][j])
            dfs(heights,vis,i,j+1);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>> pac(m,vector<int>(n,-1));
        vector<vector<int>> atl(m,vector<int>(n,-1));
        
        for(int i=0;i<m;i++){
            dfs(heights,pac,i,0);
            dfs(heights,atl,i,n-1);
        }
        for(int i=0;i<n;i++){
            dfs(heights,pac,0,i);
            dfs(heights,atl,m-1,i);
        }
        
        vector<vector<int>> res;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pac[i][j]==1 && atl[i][j]==1){
                    vector<int> a;
                    a.push_back(i);
                    a.push_back(j);
                    res.push_back(a);
                }
            }
        }
        return res;
    }
};
