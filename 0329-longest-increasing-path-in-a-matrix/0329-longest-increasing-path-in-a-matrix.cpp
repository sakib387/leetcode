class Solution {
public:
    int n,m;vector<vector<int>>v;
     int ar[202][202];
    int cal(int a,int b,int p){
        if (ar[a][b]>0) return ar[a][b] ;
        if(a>=n||b>=m)return 0;
        int na,nb;
        //cout<<a<<" "<<b<<" "<<v[a][b]<<endl;
        int x=1,y=1,z=1,k=1;
        na=a+1;nb=b;
        if(na<n&&v[na][nb]>p){
            x=1+cal(na,nb,v[na][nb]);
        }
        na=a-1;nb=b;
         if(na>=0&&v[na][nb]>p){
            y=1+cal(na,nb,v[na][nb]);
        }
        na=a;nb=b+1;
         if(nb<m&&v[na][nb]>p){
            z=1+cal(na,nb,v[na][nb]);
        }
        
        na=a;nb=b-1;
         if(nb>=0&&v[na][nb]>p){
            k=1+cal(na,nb,v[na][nb]);
        }
        int an=max(k,z);
        an=max(an,y);
        an=max(an,x);
        return ar[a][b]=an;
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        v=matrix;
        n=matrix.size();
        m=matrix[0].size();
        int an=0,fl=0;
        memset(ar,0,sizeof(ar));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ar[i][j]==0){
                    //cout<<i<<" "<<j<<endl;
                     int a=cal(i,j,v[i][j]); 
                an=max(an,a);//fl=1;
                }
                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ar[i][j]<<" ";
            }cout<<endl;
        }
        return an;
    }
};