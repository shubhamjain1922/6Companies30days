class Solution
{
    public:
    int res=0;
    int temp=0;
    void fuc(vector<vector<int>>& grid,int r,int c){
        int m=grid.size();
        int n=grid[0].size();
        if(r<0 || c<0 || r>=m ||c>=n || grid[r][c]!=1)
        {
            return;
        }
        grid[r][c]=0;
        ++temp;
        fuc(grid,r-1,c-1);
        fuc(grid,r-1,c);
        fuc(grid,r-1,c+1);
        fuc(grid,r,c-1);
        fuc(grid,r,c+1);
        fuc(grid,r+1,c-1);
        fuc(grid,r+1,c);
        fuc(grid,r+1,c+1);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    fuc(grid,i,j);
                    res=max(res,temp);
                    temp=0;
                }
            }
        }
        return res;
    }
};
