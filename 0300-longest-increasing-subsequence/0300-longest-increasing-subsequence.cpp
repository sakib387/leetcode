class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int ar[30000]= {0};
       
        ar[0]=1;int an=1;
        for(int i=1; i<v.size(); i++)
        {ar[i]=1;
          for(int j=i-1;j>=0;j--){
            if(v[j]<v[i])ar[i]=max(ar[i],ar[j]+1);
          }
          an=max(an,ar[i]);
        }
        return an;
    }
};