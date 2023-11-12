class Solution {
    
    
    vector<vector<int> >vv;
        vector<int>v,x;
void cal(int a,int ms,int mk,vector<int> vc,int sz){
  if(ms==mk){
    vv.push_back(vc);return;
  }
  for(int i=0;i<sz;i++){
    int c=(1<<i);
    if((ms&c)==0){
            vc.push_back(v[i]);
        cal(a,(ms|c),mk,vc,sz); vc.pop_back(); 
    }
  }return;
  
}
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        v=nums;
        int a=v.size(),an=0;
          for(int i=0;i<a;i++){
           int c=(1<<i);
            an|=c;//cout<<c<<" "<<an<<endl;
        }
        cal(0,0,an,x,a);
        map<vector<int>,int>m;
        vector<vector<int>>ans;
        for(int i=0;i<vv.size();i++){
            if(m[vv[i]]==0)ans.push_back(vv[i]);
            m[vv[i]]=1;
        }
        return ans;
    }
};