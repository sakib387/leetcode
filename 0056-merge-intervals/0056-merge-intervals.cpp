class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
         vector<vector<int>> ans;
        vector<pair<int,char>>vs;
        vector<int>x;
        x.push_back(0);
        x.push_back(0);
        for(int i=0;i<v.size();i++){
            int a=v[i][0];
            int b=v[i][1];
             vs.push_back({a,'l'});
             vs.push_back({b,'r'});
            
        }
        sort(vs.begin(),vs.end());
        int l=0,r=0;
        for(int i=0;i<vs.size();i++){
            int a=vs[i].first;
            char ch=vs[i].second;
            if(ch=='l'){
                if(l==0)
                x[0]=a;
              l++;               
            }
            else if(ch=='r'){
                  l--;
                if(l==0){
                    x[1]=a;
                       ans.push_back(x);
                }
                 
             
            }
            
        }
        return ans;
    }
};