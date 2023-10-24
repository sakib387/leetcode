class Solution {
    int dp[(1<<21)+1][2];
string s,s1,s2;
vector<pair<int,int>>v;
int cal(int mx,int tr,int sm,int ms,int f)
{
    if(tr==0)return 1;
    if(f==1&&sm>=tr)return 0;
    if(sm>=tr)return 1;
    if(dp[ms][f]!=-1)return dp[ms][f];
    if(f){
        for(int i=1;i<=mx;i++){
            if((ms&(1<<i)))continue;
            if(cal(mx,tr,sm+i,(ms|(1<<i)),!f))return  dp[ms][f]=1;
        }
        return  dp[ms][f]=0;
    }
    else{
         for(int i=1;i<=mx;i++){
            if((ms&(1<<i)))continue;
            if(!cal(mx,tr,sm+i,(ms|(1<<i)),!f))return  dp[ms][f]=0;
        }
        return  dp[ms][f]=1;
    }
}
public:
    bool canIWin(int mx, int de) {
         int a,b,c,d,e=0,i,j,f= 0,g= 0,h,k=0,r=0,l=0,an=100;

        memset(dp,-1,sizeof(dp));
        if(mx*(mx+1)/2<de)return false;

     
         l=cal(mx,de,0,0,1);
        if(l)return true;
        else return false;
    }
};