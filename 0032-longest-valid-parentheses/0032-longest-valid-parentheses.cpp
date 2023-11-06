class Solution {
   
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        int dp[40009]={0},an=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')st.push(i);
            else
            {
                if(st.size())
                {
                  int x=st.top();
                  dp[i]=i-x+1;
                  if(x>0){
                    dp[i]+=dp[x-1];
                  }
                  st.pop();
                }
            }
            an=max(an,dp[i]);
        }
        return an;
    }
};