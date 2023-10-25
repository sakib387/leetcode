class Solution {
public:
    int dp[10000];
string s,s1,s2;
map<string,int>ms;
int cal(int a,int n)
{
    if(a==n)return 1;
    if(dp[a]!=-1)return dp[a];
    for (int i = 1; i <= n - a; i++)
    {
        s1 = s.substr(a, i);
        if(ms[s1]&& cal(a+i,n))return dp[a]=1;
    }
    return dp[a]=0;


}
    bool wordBreak(string ss, vector<string>& wordDict) {
         memset(dp,-1,sizeof(dp));
        
        for(int i=0; i<wordDict.size(); i++)
        {
            s1=wordDict[i];
            ms[s1]=1;
        }
        s=ss;
        return cal(0,s.size());
         
    }
};