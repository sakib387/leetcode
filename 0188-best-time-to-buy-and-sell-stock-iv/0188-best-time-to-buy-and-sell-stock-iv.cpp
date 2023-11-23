class Solution {
    
    int dp[1001][101][2];

  
  vector<int>v;
int cal(int in,int k,int fl){
   if(k==0||in==v.size()){
    return 0;
   }
  if(dp[in][k][fl]!=-1)return dp[in][k][fl];
   int x=0,y=0;
   if(fl==0){
    x+=cal(in+1,k,fl);
    y+=cal(in+1,k,1)-v[in];
   }
   else{
    x+=cal(in+1,k,fl);
    y+=cal(in+1,k-1,0)+v[in];
   }
   return dp[in][k][fl]=max(x,y);
}
public:
    int maxProfit(int k, vector<int>& prices) {
        v=prices; memset(dp,-1,sizeof(dp));
        int a=cal(0,k,0);
        return a;
    }
};