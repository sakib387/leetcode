class Solution {
    int dp[150];
string s,s1,s2;
int cal(int a,int b)
{
    if(a==b)return 1;
    if(dp[a]!=-1)return dp[a];
    int c=0;
    if(s[a]=='1')
    {
      c=cal(a+1,b);
      if(a+1<b)c+=cal(a+2,b);
    }
    if(s[a]=='2'){
    c+=cal(a+1,b);
      if(a+1<b&&s[a+1]<='6')c+=cal(a+2,b);
    }
    if(s[a]>='3'){
        c+=cal(a+1,b);
    }
    return dp[a]=c;
}
public:
    int numDecodings(string ss) {
        s=ss;
         for(int i=0;i<s.size();i++)dp[i]=-1;
      int  l=cal(0,s.size());
       return l;
    }
};