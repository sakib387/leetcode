class Solution {
public:
    int trap(vector<int>& v) {
         vector<int>lf,rt; 
        lf.push_back(v[0]);
        rt.push_back(0);
        int ht=v[0];
        for(int i=1;i<v.size();i++){
           ht=max(ht,v[i]);
           lf.push_back(ht);
           rt.push_back(0);
        }
        ht=v.back();
        rt.back()=ht;
        for(int i=v.size()-2;i>=0;i--){
            ht=max(ht,v[i]);
            rt[i]=ht;
        }
        ht=0;
        int ans=0;
        for(int i=1;i<v.size()-1;i++){
            ht=min(lf[i-1],rt[i+1]);
           // cout<<v[i]<<" "<<lf[i-1]<<" "<<rt[i+1]<<endl;
            if(ht>v[i]){
                ans+=ht-v[i];
            }
        }
        return ans;

    }
};