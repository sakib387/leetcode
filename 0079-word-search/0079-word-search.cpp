class Solution {
    int n,m,an=0;
 
    bool cal(int x,int y,int c,vector<vector<char>>& board,string &word){
        if(c==word.size())return true;
        if(c>word.size()||x<0||x>=n||y<0||y>=m||board[x][y]!=word[c])return false;
        char ch=board[x][y];
        //cout<<c<<endl;
        board[x][y]=' ';
        bool ans= cal(x+1,y,c+1,board,word)|cal(x-1,y,c+1,board,word)|cal(x,y-1,c+1,board,word)|cal(x,y+1,c+1,board,word);
        board[x][y]=ch;
        return ans;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        string s;
        n=board.size();
        m=board[0].size();
        bool ans=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                   ans|=  cal(i,j,0,board,word);
                if(ans)break;
            }
        }
    
        return ans;
    }
};