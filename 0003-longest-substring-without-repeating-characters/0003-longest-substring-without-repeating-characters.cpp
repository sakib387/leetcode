class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a,b,c,d,e=0,i,j,f= 0,g= 0,h,k=0,r=0,l=0,an=100;
         
        int ar[30000]= {0};
        for(i=0,j=0; i<s.size(); i++)
        {
            c=s[i];
            ar[c]++;
            if(ar[c]>1){
                while(ar[c]>1&&j<i){
                    d=s[j];
                    ar[d]--;
                    j++;
                }
            }
            g=(i-j);
          //  cout<<i<<" "<<j<<" "<<ar[1]<<endl;
            k=max(g,k);

        }
       // cout<<k<<endl;
        if(s.size()==0)k=-1;
       return k+1;
    }
};