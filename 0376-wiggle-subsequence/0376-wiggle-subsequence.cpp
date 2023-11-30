class Solution {
public:
    int wiggleMaxLength(vector<int>& v) {
        int an=1,pre=0,n=0;
        for(int i=1;i<v.size();i++){
           if(v[i]>v[i-1]){
               if(n==0||n==-1){
                   n=1;an++;
               }
             
           }
            if(v[i]<v[i-1]){
                if(n==0||n==1){
                    n=-1;an++;
                }
            }
        }
        return an;
    }
};