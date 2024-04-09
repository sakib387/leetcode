class Solution {
    int k;
    vector<int>v;
    int dp[1000];
    int maxSum(int i){
        cout<<i<<endl;
        if(i>=v.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int ln=0,mx=0,an=0;
        int n=v.size(); 
        for(int j=i;j<min(i+k,n);j++){
            ln++;
            mx=max(mx,v[j]);
           an=max(ln*mx+maxSum(j+1),an);
        }
        
        return dp[i]=an;
    }
public:
    int maxSumAfterPartitioning(vector<int>& arr, int kn) {
       memset(dp,-1,sizeof(dp));
        v=arr;k=kn;
        return maxSum(0);
        // return 0;
    }
};