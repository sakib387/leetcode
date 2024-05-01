class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       // nums.push_back(0);
        int an=0;
        if(nums.size()<=2)return nums.size();
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-1]&&nums[i]==nums[i-2]){
                nums[i-2]=1000000;an++;
            }
        }
        int j=0;
        for(int i=0;i<nums.size();){
             if(nums[i]==1000000){
                 i++;
             }
            else{
                if(i>j){
                    swap(nums[i],nums[j]);i++;j++;
                }
                else {
                    i++;j++;
                }
            }
        }
        return nums.size()-an;
    }
};