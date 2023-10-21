class Solution {
    int dp[1005][1005];
string s,s1,s2;
int cal(int a,int b,int c,int d)
{
    if(b==d)return 1;
    else if(a==c)return 0;
    if(dp[a][b]!=-1)return dp[a][b];
    int an=0;
    if(s[a]==s1[b]){
       an=cal(a+1,b+1,c,d);
       an+=cal(a+1,b,c,d);

    }
    else{
         an+=cal(a+1,b,c,d);

    }
    return dp[a][b]=an;
}
public:
    int numDistinct(string ss, string t) {
         memset(dp,-1,sizeof(dp));
        s=ss;s1=t;

      int  l=cal(0,0,s.size(),s1.size());
        return l;
    }
};