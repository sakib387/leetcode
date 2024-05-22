class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int fl=-1,mx;
        for(int i=v.size()-1;i>0;i--){
            if(v[i-1]<v[i]){
                fl=i-1;
                mx=i;
                break;
            }
        }
        if(fl==-1){
            sort(v.begin(),v.end());
        }
        else{
            for(int i=v.size()-1;i>fl;i--){
                if(v[i]>v[fl]&&v[i]<v[mx])mx=i;
            }
            swap(v[fl],v[mx]);
            sort(v.begin()+fl+1,v.end());
        }
        
    }
};