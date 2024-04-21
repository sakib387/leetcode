class Solution {
    int dp[10005];
    int cal(int a){
        if(a==0)return 0;
        if(a==1)return 1;
        if(dp[a]!=-1)return dp[a];
        int c=INT_MAX;
        for(int i=1;i*i<=a;i++){
            c=min(c,1+cal(a-i*i));
        }
        return dp[a]=c;
        
        
    }
public:
    int numSquares(int n) {
        int a=sqrt(n);
        memset(dp,-1,sizeof(dp));
        return cal(n);
        
    }
};