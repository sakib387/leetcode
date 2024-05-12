class Solution {
    
 
    
    vector<vector<int>>ans;
    void cal(int n,int i,int k,vector<int>&v){
      if(v.size()==k){
          ans.push_back(v);return;
      }
    if(n<i||v.size()>k)return;
        cal(n,i+1,k,v);
        v.push_back(i);
        cal(n,i+1,k,v);
        v.pop_back();
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        
        cal(n,1,k,v);
 
        return ans;
    }
};