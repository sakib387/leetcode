class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
       int l=0;
        int r=v.size()-1;
         vector<int>an;
        while(l<r){
            int s=v[l]+v[r];
            if(s>t){
                r--;
            }
            else if(s<t){
                l++;
            }
            else{
                
                an.push_back(l+1);
                an.push_back(r+1);
                l=r+1;
                break;
            }
        }
        return an;
    }
};