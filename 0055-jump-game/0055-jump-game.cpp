class Solution {
    vector<int>v;
    int dp[10008];
    int jmp(int a){
        if(a==v.size()-1)return 1;
        if(v[a]==0)return 0;
        if(dp[a]!=-1)return dp[a];
        int c=a+v[a];
        for(int i=a+1;i<=c;i++){
            if(i<v.size()&&jmp(i)){
                return dp[a]=1;
            }
        }
        return dp[a]= 0;
    }
public:
    bool canJump(vector<int>& nums) {
        v=nums;
        for(int i=0;i<10005;i++)dp[i]=-1;
        if( jmp(0))return true;
        else return false;
        
    }
};