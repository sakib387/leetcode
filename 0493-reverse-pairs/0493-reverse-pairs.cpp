#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update>

class Solution {
 
 
public:
    int reversePairs(vector<int>& nums) {
     int ans=0,c=0;
      ordered_set st;
        for(int i=0;i<nums.size();i++){
            long long v=nums[i];
            ans+=st.order_of_key(-(v*2));
            st.insert(-v);
        }
        return ans;
    
    }
};