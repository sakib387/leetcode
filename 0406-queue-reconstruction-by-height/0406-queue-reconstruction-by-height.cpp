class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& v) {
     
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
           for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[i][0]==v[j][0]){
                    if(v[i][1]<v[j][1]){
                        swap(v[i],v[j]);
                    }
                }
            }
        }
        for(int i=1;i<v.size();i++){
            int c=0;
            for(int j=i-1;j>=0;j--){
                if(v[i][0]<=v[j][0])c++;
            }
            c-=v[i][1];
            if(c>0){
                int t=i;
                for(int j=i-1;j>=0;j--){
                    if(v[t][0]<=v[j][0]){
                        //swap(v[t])
                        int tm1=v[t][0];
                        int tm2=v[t][1];
                        v[t][0]=v[j][0];
                        v[t][1]=v[j][1];
                        v[j][0]=tm1;v[j][1]=tm2;
                        t=j;
                        c--;
                        if(c==0)break;
                    }
                }
            }
        }
        return v;
    }
};