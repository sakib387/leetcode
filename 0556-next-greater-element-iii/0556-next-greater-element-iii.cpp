class Solution {
public:
    long long a;
    long long ans=-1;
    vector<long long>v;
    
    void cal(long long ms,long long n){
        if(ms==(1<<v.size())-1){
            if(n>a){
               if(ans==-1)ans=n;
                else ans=min(ans,n);
            }
        }
        for(int i=0;i<v.size();i++){
            long long c=(1<<i);
            if((ms&c)==0){
                cal((ms|c),(n*10)+v[i]);
            }
        }
    }
    
    int nextGreaterElement(int n) {
      a=n; 
      while(a){
          v.push_back(a%10);a/=10;
      }
        a=n;
        cal(0,0);
        cout<<ans<<endl;
       long long r=1;
        r=(r<<31)-1;
        if(ans>r)ans=-1;
        return ans;
    }
};