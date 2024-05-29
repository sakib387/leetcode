class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=INT_MIN,cn1=0,el2=INT_MIN,cn2=0;
        
        for(int i=0;i<nums.size();i++){
            if(cn1==0&&nums[i]!=el2){
                cn1=1;el1=nums[i];
            }
            else if(cn2==0&&nums[i]!=el1){
                cn2=1;el2=nums[i];
            }
            else if(nums[i]==el1)cn1++;
            else if(nums[i]==el2)cn2++;
            else cn1--,cn2--;
        }
        vector<int>v;
        if(cn1>0){
            cn1=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==el1)cn1++;
            }
            if(cn1>nums.size()/3)v.push_back(el1);
        }
             if(cn2>0){
            cn1=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==el2)cn1++;
            }
            if(cn1>nums.size()/3)v.push_back(el2);
        }
        return v;
    }
};