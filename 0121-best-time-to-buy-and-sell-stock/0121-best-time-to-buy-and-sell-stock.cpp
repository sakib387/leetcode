class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mx=0,an=0;
        for(int i=v.size()-1;i>=0;i--){
            mx=max(v[i],mx);
            an=max(an,mx-v[i]);
        }
        return an;
    }
};