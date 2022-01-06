class Solution{
public:
    
    bool valid(vector<vector<int>> mat,int i,int j){
        for(int k=0;k<9;k++){
            if(k!=i && mat[k][j]==mat[i][j])
            return false;
            if(k!=j && mat[i][k]==mat[i][j])
            return false;
            int r=3*(i/3)+k/3;
            int c=3*(j/3)+k%3;
            if((r!=i || j!=c) && mat[r][c]==mat[i][j])
            return false;
        }
        
        return true;
    }
    
    int isValid(vector<vector<int>> mat){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]!=0){
                    if(!valid(mat,i,j)){
                        return 0;
                    }
                }
            }
        }
        return 1;
    }
};
