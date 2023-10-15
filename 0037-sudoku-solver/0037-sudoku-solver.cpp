class Solution {
public:
 
     bool checked(vector<vector<char>>& board,int a,int b,char c)
{
    for(int i=0; i<=8; i++)
    {
        if(board[i][b]==c)return false;
        if(board[a][i]==c)return false;
    }
    int rw=(a/3)*3,co=(b/3)*3;
    for(int i=rw;i<=rw+2;i++){
        for(int j=co;j<=co+2;j++){
            if(board[i][j]==c)return false;
        }
    }
    return true;
}
bool check_valid(vector<vector<char>>& board)
{

     for (int i=0;i<board.size();i++)
        {
            for (int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++){
                        if(checked(board,i,j,c)) {
                            board[i][j]=c;
                            if(check_valid(board)){
                                return true;
                            }
                            else board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
     }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {

       check_valid(board);
      
        
    }
};