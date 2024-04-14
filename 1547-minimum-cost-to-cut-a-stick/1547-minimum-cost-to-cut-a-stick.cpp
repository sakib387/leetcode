class Solution {
    vector<int>v;
    int dp[101][101];
    int cal(int i,int j){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int mn=INT_MAX;
        for(int x=i;x<=j;x++){
            int cost=v[j+1]-v[i-1]+cal(i,x-1)+cal(x+1,j);
            mn=min(mn,cost);
        }
        return dp[i][j]= mn;
    }
public:
    int minCost(int n, vector<int>& cuts) {
        v=cuts;
        memset(dp,-1,sizeof(dp));
            v.push_back(0);
        v.push_back(n);
        sort(v.begin(),v.end());
        int cst=cal(1,v.size()-2);
        return cst;
        
    }
};