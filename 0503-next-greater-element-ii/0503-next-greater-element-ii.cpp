class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>v(nums.size(),-1);
        int n=v.size();
        for(int i=(2*nums.size()-1);i>=0;i--){
           if(st.size()==0){
               v[i%n]=-1;
           } 
            else{
                while(nums[i%n]>=st.top()){
                    st.pop();
                   
                    if(st.size()==0)break;
                }
                if(st.size()==0){
                     v[i%n]=-1;
                }
                else{
                     v[i%n]=st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return v;
        
}
};