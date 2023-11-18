class Solution {
public:
    int dp[10004];
    vector<int>v;
    int cal(int a,int sz){
         
        if(a>=sz)return 0;
        if(v[a-1]==0)return 100000;
        if(dp[a]!=-1)return dp[a];
       
        int y=100000;
        
        for(int i=1;i<=v[a-1];i++){
           // cout<<a<<" "<<i<<" "<<v[a]<<endl;
            y=min(y,1+cal(a+i,sz));
        }
        return dp[a]=y;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        v=nums;
        int n=cal(1,v.size());
        return n;
    }
};