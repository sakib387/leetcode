class Solution {
public:
    int dp[10004];
    vector<int>v;
    int p=0;
    int cal(int am){
        
        
        if(am==0){
            p=1;
            return 0; 
        }
        if(am<0)return INT_MAX;
        if(dp[am]!=-1)return dp[am];
        int x=INT_MAX,an;
        for(int i=v.size()-1;i>=0;i--){
            if(am-v[i]>=0){
                 an=cal(am-v[i]);
            if(an!=INT_MAX)x=min(x,an+1);
            }
              
        }
        return dp[am]=x;
    }
    int coinChange(vector<int>& coins, int amount) {
       memset(dp,-1,sizeof(dp));
        v=coins;
       
        int a=cal(amount);
        
        if(p)return a;
        else return -1;
    }
    
};