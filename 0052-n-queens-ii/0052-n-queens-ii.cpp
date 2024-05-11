class Solution {
    int vis[20][20],sz,an=0;
    
    bool issafe(int row,int cal){
        int x=row,y=cal;
        while(y>=0){
            if(vis[x][y]==1)return false;
            y--;
        }
        x=row,y=cal;
     while(x>=0){
            if(vis[x][y]==1)return false;
            x--;
        }
         x=row,y=cal;
        while(y>=0&&x>=0){
            if(vis[x][y]==1)return false;
            y--;x--;
        }
         x=row,y=cal;
        while(x<sz&&y>=0){
            if(vis[x][y]==1)return false;
            x++;y--;
        }
           x=row,y=cal;
        while(y<sz&&x>=0){
            if(vis[x][y]==1)return false;
            y++;x--;
        }
        return true;
    }
    void cal(int a){
         if(a==sz){an++;
                 for(int i=0;i<sz;i++){
                     for(int j=0;j<sz;j++)cout<<vis[i][j]<<" ";cout<<endl;
                 }cout<<endl;
             return ;
         }
        for(int i=0;i<sz;i++ ){
            if(issafe(a,i)){
                vis[a][i]=1;
                cal(a+1);
                vis[a][i]=0;
            }
        }
    }
public:
    int totalNQueens(int n) {
        sz=n;
        cal(0);
        return an;
    }
};