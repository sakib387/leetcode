class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum=0,l=0;
        
        for(int i=0;i<v.size();i++){
            l+=v[i];
            if(l<0)l=0;
            sum=max(sum,l);
        }
        sort(v.begin(),v.end());
            if(v.back()<0)sum=v.back();
        return sum;
    }
};