class Solution {
public:
    int dp[100000];
    vector<int>v;
    int cal(int a){
        if(a>=v.size())return 0;
        if(dp[a]!=-1)return dp[a];
        return dp[a]=max(cal(a+1),cal(a+1)+v[a]-v[a-1]);
    }
    int maxProfit(vector<int>& p) {
      v=p;
        memset(dp,-1,sizeof(dp));
      int c=cal(1);
        cout<<c<<endl;
        return c;
    }
};