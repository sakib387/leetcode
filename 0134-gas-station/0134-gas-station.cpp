class Solution {
public:
    int canCompleteCircuit(vector<int>& v, vector<int>& x) {
        
        int ans=-1;
        int sm=0;
        int mn=0;
        for(int i=0;i<v.size();i++){
            int pre=sm;
            if(v[i]>x[i])sm+=v[i]-x[i];
            else sm-=x[i]-v[i];
            if(pre<0&&sm>=0)ans=i;
            if(sm<0)ans=-1;
            mn=min(sm,mn);
        }
       if(mn==0)return 0;
       if(sm<0)return -1;
        sm=0;
       // cout<<mn<<endl;
      for(int i=v.size()-1;i>=0;i--){
          if(v[i]>x[i])sm+=v[i]-x[i];
          else sm-=x[i]-v[i];
          if(sm>=mn*-1){
              return i;
              
          }
      }
        return -1;
        
        
        
    }
};