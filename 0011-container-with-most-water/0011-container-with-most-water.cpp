class Solution {
public:
    int maxArea(vector<int>& v) {
        int i=0,j=v.size()-1;
        int an=0,tm=0;
        while(i<=j){
            tm=abs(i-j)*min(v[i],v[j]);
            an=max(an,tm);
            if(v[i]==v[j]){i++;j--;}
            else if(v[i]>v[j])j--;
            else i++;
        }
        return an;
    }
};