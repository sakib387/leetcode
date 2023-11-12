class Solution {
    
vector<vector<int> >vv;
vector<int>v,x;
void cal(int i,int sm,int tr,vector<int>vx)
{
    if(i==v.size())
    {
        if(sm==tr)
        {
            vv.push_back(vx);
        }
        return;
    }
    if(sm==tr)
    {
        vv.push_back(vx);
        return;
    }
     for(int j=i;j<v.size();j++){
        if(j>i&&v[j]==v[j-1])continue;
        if(v[j]+sm>tr)continue;
        vx.push_back(v[j]);
        cal(j+1,sm+v[j],tr,vx);
        vx.pop_back();
    }
    return;
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int tn) {
        v=candidates;
        sort(v.begin(),v.end());
        cal(0,0,tn,x);
       
          return vv;
    }
};