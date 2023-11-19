class Solution {
public:
    int dp[50005];
    int vis[50005];
    vector<int>v;
    int cal(int st){
        if(v[st]==0)return 1;
        if(vis[st]==1)return 0;
        if(dp[st]!=-1)return dp[st];
        vis[st]=1;
        int x=0,y=0;
        if(st+v[st]<v.size()){
             x=cal(st+v[st]);
        }
        if(st-v[st]>=0){
            y=cal(st-v[st]);
        }
        return dp[st]=(x|y);
        
        
    }
    bool canReach(vector<int>& arr, int start) {
        memset(dp,-1,sizeof(dp));
        memset(vis,0,sizeof(vis));
        v=arr;
       int a= cal(start);
        if(a)return true;
        else return false;
        
    }
};