class Solution {
public:

int neigh_count(int r, int c,vector<vector<int>>& board)
    {
        int nei=0;
      for(int i=r-1; i<=r+1;i++)
        {
            for(int j=c-1;j<=c+1;j++ )
            {
              if(i<0 || j<0 || (i==r && j==c) || i>=board.size() || j>=board[0].size())
                continue;
                
                if(board[i][j]==1 || board[i][j]==3)
                    nei++;
                
            }
      }
        return nei;
    
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n =0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                n = neigh_count(i,j,board);

                if(board[i][j] == 1){
                    if(n == 2 || n==3){
                        board[i][j]=3;
                    }
                }
                else {
                    if(n == 3){
                     board[i][j] = 2;
                    }
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == 1){
                    board[i][j]=0;
            }
                else if(board[i][j] == 2 || board[i][j]==3){
                    board[i][j] = 1;
                }
        }
    }
    }
};
