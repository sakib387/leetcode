class Solution {
    int dp[1005];
string s,s1,s2;
vector<int>v;
int cal(int a)
{
   if(a>=v.size())return 0;
   if(dp[a]!=-1)return dp[a];
   int an=0;
   an=max(cal(a+1),cal(a+2)+v[a]);
   return dp[a]=an;
}
public:
    int rob(vector<int>& nums) {
        v=nums;        memset(dp,-1,sizeof(dp));

        return cal(0);
    }
};