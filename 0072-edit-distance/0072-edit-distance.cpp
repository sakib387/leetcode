class Solution {
public:
    int dp[600][600];
    int cal(string s1,string s2,int a,int b ){
       if(a==-1)return b;
       if(b==-1)return a;
        if(dp[a][b]!=-1)return dp[a][b];
       if(s1[a]==s2[b]){
         return dp[a][b]= cal(s1,s2,a-1,b-1);
       }
       else{
           return dp[a][b]=1+min(min(cal(s1,s2,a-1,b),cal(s1,s2,a,b-1)),cal(s1,s2,a-1,b-1));
       }
    }
    int minDistance(string s1, string s2) {
        for(int i=0;i<=550;i++){
            for(int j=0;j<=550;j++)dp[i][j]=-1;
        }
        int c=cal(s1,s2,s1.size()-1,s2.size()-1);
        return c+1;
    }
};