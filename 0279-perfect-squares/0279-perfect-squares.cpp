class Solution {
    vector<int>v;
    int dp[40000];
    int cal(int a){
        if (a==0)return 0;
        if(a<0)return INT_MAX;
        if(dp[a]!=-1)return dp[a];
        int x=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(v[i]<=a)x=min(x,1+cal(a-v[i]));
        }
        return dp[a]=x;
    }
public:
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        for(int i=1;i*i<=n;i++){
            v.push_back(i*i);
        }
        int l=cal(n);
        return l;
    }
};