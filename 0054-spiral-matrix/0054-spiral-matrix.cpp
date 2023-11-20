class Solution {
    vector<vector<int>>v;
    vector<int>ans;
    
    map<pair<int,int>,int>m;
    void cal(int a,int b){
        m[{a,b}]=1;
         ans.push_back(v[a][b]);
if(m[{a,b+1}]==0&&a<v.size()&&b+1<v[0].size()&&((m[{a-1,b}]==1&&a-1>=0)||(a-1<0))){
            cal(a,b+1);
        }
        if(m[{a+1,b}]==0&&a+1<v.size()&&b<v[0].size()){
            cal(a+1,b);
        }
        if(m[{a,b-1}]==0&&a<v.size()&&b-1>=0){
            cal(a,b-1);
        }
     if(m[{a-1,b}]==0&&a-1>=0&&b<v[0].size()){
            cal(a-1,b);
        }

    }
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      
    v=matrix;
        
        cal(0,0);
    return ans;
    
 }
};