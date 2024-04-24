class Solution {
    int dp[303][303];
    int cal(int l,int r){
         if(l>r)return 0;
        if(dp[l][r]!=-1)return dp[l][r];
      int an=-10;
        for(int i=l;i<=r;i++){
  
            an=max(an,(cal(l,i-1)+(v[i]*v[l-1]*v[r+1])+cal(i+1,r)));
        }
        return dp[l][r]= an;
    }
public:
    vector<int>v;
    int maxCoins(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        v.push_back(1);
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
          v.push_back(1);
        return cal(1,v.size()-2);
    }
};