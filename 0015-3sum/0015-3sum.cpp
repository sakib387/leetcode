class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
       sort(v.begin(),v.end());
      
        vector<vector<int>>ans;
        for(int i=0;i+2<v.size();i++){
             if(i>0){
                    if(v[i]==v[i-1])continue;
                }
            int j=i+1;int k=v.size()-1;
            while(j<k){
              int  an=v[i]+v[j]+v[k];
                if(an==0){
                    ans.push_back({v[i],v[j],v[k]});
                   int c=v[k];
                    while(v[k]==c&&k>j){
                        k--;
                    }
                    c=v[j];
                    while(v[j]==c&&j<k){
                        j++;
                    }
                }
             else   if(an>0){
                    k--;
                }
                else j++;
            }
        }
       // cout<<ans.size()<<endl;
       return ans;

    }
};