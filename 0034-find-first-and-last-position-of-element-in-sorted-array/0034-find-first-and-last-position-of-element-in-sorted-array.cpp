class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tr) {
        
        int l1=-1,r1=-1;
        
        int l=0,r=nums.size()-1;
        while(l<=r){
            int md=(l+r)/2;
            if(nums[md]==tr){
                if(l1==-1){
                    l1=md;
                }
                else l1=min(l1,md);
                r=md-1;
            }
            else if(nums[md]>tr){
                r=md-1;
            }
            else l=md+1;
        }
        
           l=0,r=nums.size()-1;
        while(l<=r){
            int md=(l+r)/2;
            if(nums[md]==tr){
                if(r1==-1){
                    r1=md;
                }
                else r1=max(r1,md);
                l=md+1;
            }
            else if(nums[md]>tr){
                r=md-1;
            }
            else l=md+1;
        }
        
        vector<int>v;
        v.push_back(l1);
        v.push_back(r1);
        return v;
    }
};