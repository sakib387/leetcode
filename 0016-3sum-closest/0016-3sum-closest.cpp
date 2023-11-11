class Solution {
public:
    int threeSumClosest(vector<int>& v, int tr) {
         sort(v.begin(),v.end());
        int ans=INT_MAX;
        int an=v[0]+v[1]+v[2];
        for(int i=0; i<v.size(); i++)
        {
            int sum=v[i];
         int   l=0;
         int   r=v.size()-1;
            while(l<r)
            {
                if(l==i)
                {
                    l++;
                    continue;
                }
                if(r==i)
                {
                    r--;
                    continue;
                }
                sum+=(v[l]+v[r]);
                if(abs(tr-sum)<=ans){
                    an=sum;ans=abs(tr-sum);
                }
                if(sum>tr){r--;}
                else l++;
                sum=v[i];
            }
        }
        return an;
    }
};