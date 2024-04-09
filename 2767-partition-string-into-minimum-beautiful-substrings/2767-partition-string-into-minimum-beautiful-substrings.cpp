class Solution {
    map<int,int>m;
    string s;
    int dp[100];
    int cal(int a){
        if(a<0)return 0;
        if(dp[a]!=-1)return dp[a];
        int b=0,c=0,an=100;
        for(int i=a;i>=0;i--){
            if(s[i]=='1'){
             c+=(1<<b);
                if(m[c]==1){
                    cout<<c<<endl;
                    an=min(cal(i-1)+1,an);
                }
            }
             b++;
        }
        
        return dp[a]= an;
    }
public:
    int minimumBeautifulSubstrings(string s1) {
        s=s1;
        memset(dp,-1,sizeof(dp));
        if(s[0]=='0')
            
        return -1;
        else{
            int a;
            for(int i=0;i<=7;i++){
                if(i==0)a=1;
                else a*=5;
                m[a]=1;
            }
            int c= cal(s.size()-1);
            if(c>=100)return -1;
            return c;
            
        }
    }
};