class Solution {
    int lmt[2005];
int dp[2005][2005];
map<int ,int>mn,ind;
int cal(int in,int n,int jm){

    if(in==n)return 1;
    int c=lmt[in];
    if(dp[in][jm]!=-1)return dp[in][jm];
    if(mn[c+jm]){

        if(cal(ind[c+jm],n,jm))return dp[in][jm]=1;
    }
    if(mn[c+jm+1]&&in>1){

        if(cal(ind[c+jm+1],n,jm+1))return dp[in][jm]=1;
    }
    if(mn[c+jm-1]&&jm>1){

        if(cal(ind[c+jm-1],n,jm-1))return dp[in][jm]=1;
    }


    return dp[in][jm]=0;
}
public:
    bool canCross(vector<int>& stones) {
               memset(dp,-1,sizeof(dp));
        int a=stones.size();
        for(int i=1;i<=a;i++){
            lmt[i]=stones[i-1];
            mn[lmt[i]]=1;
            ind[lmt[i]]=i;
        }
        int an=cal(1,a,1);  
        if(an)return true;
        else return false;
    }
};