class Solution {
public:
    int m,n;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    
    bool help(vector<vector<char>>& board, string word, int i,int j,int ind){
        if(ind>=word.size())return true;
        if(i<0 || j<0 || i>=m||j>=n||board[i][j]!=word[ind])
        return false;
        
        char t=word[ind];
        board[i][j]='#';
        
        for(int k=0;k<4;k++){
            if(help(board,word,i+dx[k],j+dy[k],ind+1))
                return true;
        }
        board[i][j]=t;
        return false;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(help(board,word,i,j,0))
                return true;
            }
        }
        return false;
    }
};
