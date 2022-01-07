class Solution {
    
    int dir_x[4]={1,0,-1,0};
    int dir_y[4]={0,1,0,-1};
    
    static bool safe(int i,int j,vector<vector<int>>&grid,int n,int m)
    {
        return (i>=0 && i<n && j>=0 && j<m && grid[i][j]==1);
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>>pq;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    pq.push({i,j});
                }
            }
        }
        int time=-1; 
        
        while(!pq.empty())
        {
            int size=pq.size();
            
            for(int k=0;k<size;k++)
            {
                auto curr=pq.front();
                int i=curr.first;
                int j=curr.second;
                for(int l=0;l<4;l++)
                {
                    int new_x=i+dir_x[l];
                    int new_y=j+dir_y[l];
                    if(safe(new_x,new_y,grid,n,m))
                    {
                        
                        grid[new_x][new_y]=2;    
                        
                        pq.push({new_x,new_y});  
                    }
                }
                pq.pop();
            }
            time++;    
        }
        
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        
        return time==-1?0:time;   
        
    }
};
