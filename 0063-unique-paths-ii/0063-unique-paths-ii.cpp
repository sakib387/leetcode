class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int n=v.size(),i,j;
        int m=v[0].size();
        long long ar[n+3][m+3];
        //memset(ar,0,sizeof(ar));
        if(v[0][0]==1){
                 ar[0][0]=-1000000000000000;
             }
        else ar[0][0]=1;
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             if(i==0||j==0){
                 ar[i][j]=ar[0][0];
             }
             else ar[i][j]=0;
             if(v[i][j]==1){
                 ar[i][j]=-1000000000000000;
             }
         }
         
     }
         for(i=1;i<n;i++)
        {
            if(v[i][0]==1)ar[i][0]=-1000000000000000;
            else ar[i][0]=ar[i-1][0];
        }
         for(i=1;i<m;i++)
        {
            if(v[0][i]==1)ar[0][i]=-1000000000000000;
            else ar[0][i]=ar[0][i-1];
        }
        
          for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             if(i==0||j==0){
                 //ar[i][j]=1;
                 continue;
             }
             else if(v[i][j]==1)continue;
            else{
              if(i-1>=0)ar[i][j]=max(ar[i][j],ar[i-1][j]+ar[i][j]);
              if(j-1>=0)ar[i][j]=max(ar[i][j],ar[i][j-1]+ar[i][j]);
            }
         }
         
     }
       
        
        cout<<ar[n-1][m-1]<<endl;
        return max(0ll,ar[n-1][m-1]);
    }
};