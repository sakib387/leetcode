class Solution {
    int dp[1005];
string s,s1,s2;
vector<int>v;
int cal(int a,int n)
{
   if(a>=n)return 0;
   if(dp[a]!=-1)return dp[a];
   int an=0;
   an=max(cal(a+1,n),cal(a+2,n)+v[a]);
   return dp[a]=an;
}
public:
    int rob(vector<int>& nums) {
        v=nums;
                memset(dp,-1,sizeof(dp));
        int l=cal(0,v.size()-1);
                 memset(dp,-1,sizeof(dp));
        int l1=cal(1,v.size());
        if(v.size()==1)return v[0];
        else
        return max(l,l1);
    }
};