class Solution {
public:
    int dp[100];
    int cal(int n){
        if(n==1)return 1;
        if(n==2)return 2;
        if(dp[n]!=-1)return dp[n];
        int x=cal(n-1)+cal(n-2);
        return dp[n]=x;
    }
    int climbStairs(int n) {
     memset(dp,-1,sizeof(dp));   
        int m=cal(n);
        return m;
    }
};