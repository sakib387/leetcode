class Solution {
public:
    vector<int>v;
    int dp[100000];
    int cal(int n){
        if(n==0)return 0;
        if(n<0)return 200000000;
        if(dp[n]!=-1)return dp[n];
        int an=200000000;
        for(int i=0;i<v.size();i++){
            an=min(an,cal(n-v[i])+1);
        }
        return dp[n]= an;
    }
    int coinChange(vector<int>& coins, int amount) {
         v=coins;
        memset(dp,-1,sizeof(dp));
        int a= cal(amount);
        if(a==200000000)a=-1;
        return a;
    }
};