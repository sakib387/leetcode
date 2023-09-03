class Solution {
public:
    int uniquePaths(int a, int b) {
      
         int ar[a+10][b+10];
       ar[1][1]=0;
      for(int i=1;i<=a;i++){
        ar[i][1]=1;
      }
       for(int i=1;i<=b;i++){
        ar[1][i]=1;
      }
      for(int i=2;i<=a;i++){
        for(int j=2;j<=b;j++){
            ar[i][j]=ar[i][j-1]+ar[i-1][j];
        }
      }
     return ar[a][b];
}
};