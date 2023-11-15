class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        for(int i=0;i<v.size();i++){
            if(v[i]<0)v[i]=0;
        }
        for(int i=0;i<v.size();i++){
            int c=abs(v[i])-1;
            if(c>=0&&c<v.size()){
                if(v[c]==0)v[c]=-(v.size()+10);
                else if(v[c]>0)v[c]=-v[c];
            }
           // if(v[i]==0)v[i]=-(v.size()+10);
            
        }
        int an=v.size()+1;
        for(int i=1;i<=v.size();i++){
             if(v[i-1]>=0){
                 an=min(an,i);
             }
        }
        return an;
    }
};