class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
       for(int i=0;i<v.size();){
           int c=v[i];
           if(i+1==c||v[i]<=0||v[i]>=v.size()||v[v[i]-1]==v[i]){i++;
               continue;
           }
           else{
                cout<<i<<" "<<v[i]<<" "<<v[v[i]-1]<<endl;
               swap(v[i],v[v[i]-1]);
               
           }
       }
        cout<<endl;
        for(int i=0;i<v.size();i++){
         if(v[i]!=i+1)return i+1;
        }
        return v.size()+1;
    }
};