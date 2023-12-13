class Solution {
public:
    int search(vector<int>& v, int tr) {
        int i=0,j=v.size()-1,c=0;
        int ans=-1;
        while(i<=j){c++;
            cout<<i<<" "<<j<<" "<<c<<endl;
            int md=(i+j)/2;
           // cout<<md<<endl;
            if(v[md]==tr){
            ans=md;break;
            }
            if(v[md]>=v[i]&&v[md]<=v[j]){
                if(v[i]<=tr&&v[md]>=tr){
                    j=md-1;
                }
                else i=md+1;
            }
            else if(v[md]>=v[i]){
                if(v[md]>=tr&&v[i]<=tr){
                    j=md-1;
                }
                else i=md+1;
            }
            else{
                if(v[md]<=tr&&tr<=v[j]){
                    i=md+1;
                }
                else j=md-1;
            }
                                        
     
        }
        return ans;
    }
};