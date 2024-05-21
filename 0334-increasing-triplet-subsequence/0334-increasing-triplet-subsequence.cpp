class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        stack<int>st;
        int max_[500005];
        int a=nums.back();
        for(int i=nums.size()-1;i>=0;i--){
            a=max(a,nums[i]);
            max_[i]=a;
        }
        for(int i=0;i<nums.size();i++){
            if(st.size()==0)st.push(i);
            else{
                if(st.size()==1){
                    if(nums[i]<nums[st.top()]){
                        st.pop();st.push(i);
                    }
                    else if(nums[i]>nums[st.top()])st.push(i);
                }
              else  if(st.size()==2){
                    if(nums[i]<nums[st.top()]){
                        if(max_[i]>nums[st.top()]){}
                        else {
                            st.pop();
                           i--;
                        }
                    }
                  else if(nums[i]>nums[st.top()])st.push(i);
                }
                if(st.size()>2)break;
            }
        }
    
       return st.size()>2;
        
    }
};