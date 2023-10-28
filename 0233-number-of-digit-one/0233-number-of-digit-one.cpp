class Solution {
    
int lmt[100];
int dp[100][2][200];
int cal(int indx,int n,int l,int one){
    if(indx>=n){return one;}
   if (dp[indx][l][one] != -1) {
        return dp[indx][l][one];
    }
    int rt=9;
    if(l)rt=min(rt,lmt[indx]);

    int sm=0;
    for(int i=0;i<=rt;i++){
            int nl=1;
          if(i<lmt[indx]||l==0)nl=0;
        if(i==1){
            sm+=cal(indx+1,n,nl,(one+1));
        }
        else{
            sm+=cal(indx+1,n,nl,one);
        }
    }
    return dp[indx][l][one]=sm;
}
public:
    int countDigitOne(int a) {
         memset(dp,-1,sizeof(dp));
        int i,j,b,an=0;
        vector<int>v;
        b=a;
        while(b){
            v.push_back(b%10);

            b/=10;an++;
        }
        for(i=0,j=v.size()-1;i<v.size();i++){
            lmt[j]=v[i];j--;
        }

      int  r=cal(0,an,1,0);
        return r;
    }
};