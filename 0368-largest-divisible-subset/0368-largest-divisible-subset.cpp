class Solution {
    vector<int>ans,vv;
    int dp[1009];
    void cal(int in,vector<int>x,int d){
        if(ans.size()<x.size())ans=x;
        for(int i=in;i<vv.size();i++){
            int k=x.size();
            if(vv[i]%d==0 &&k>dp[i]){
           // cout<<x.size()<< " "<<dp[in]<<endl;
                dp[i]=k;
                x.push_back(vv[i]);
                cal(i+1,x,vv[i]);
                x.pop_back();
            }
        }
    }
public:
    vector<int> largestDivisibleSubset(vector<int>& v) {
        memset(dp,-1,sizeof(dp));
        if(v.size()<2)return v;
        vector<int>x;
        vv=v;
        sort(vv.begin(),vv.end());
       cal(0,x,1); return ans;
    }
};