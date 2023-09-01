class Solution {
public:
    int maxProduct(vector<int>& v) {
        
        int a=1,ans=-INT_MAX,ans1=-INT_MAX;
        for(int i=0;i<v.size();i++){
           a*=v[i];
           // ans=
            ans=max(ans,a);
            if(a==0)a=1;
        }
        a=1;
         for(int i=v.size()-1;i>=0;i--){
           a*=v[i];
           // ans=
            ans1=max(ans1,a);
            if(a==0)a=1;
        }
        return max(ans,ans1);
    }
};