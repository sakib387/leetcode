class Solution {
    
    int dp[150][150];
string s,s1,s2;
int cal(int a,int b)
{
    if(a==s.size()&&b==s1.size()&&a+b==s2.size())return 1;
    if(dp[a][b]!=-1)return dp[a][b];
    int x=0,y=0;
    if(a<s.size()){
        if(s[a]==s2[a+b])x=cal(a+1,b);
    }
    if(b<s1.size()){
        if(s1[b]==s2[a+b])y=cal(a,b+1);
    }
    return dp[a][b]=(x|y);
}
public:
    bool isInterleave(string sa, string sb, string sc) {
        s=sa;s1=sb;s2=sc;
         for(int i=0;i<s.size()+3;i++){
            for(int j=0;j<s1.size()+3;j++){
                dp[i][j]=-1;
            }
        }
      int  f=cal(0,0);
        if(s.size()+s1.size()!=s2.size())f=0;
        if(f)return true;
        else return false;
    }
};