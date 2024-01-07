class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
        int c=0,j=0,ans=0,t=0;
       for(int i=0;i<v.size();){
           if(v[i]==1){
               c++;i++;
           }
           else{
               if(t<k){
                   t++;c++;i++;
               }
               else{
                  if(i==j)i++;
                   else{
                       if(v[j]==0&&t>0){t--;c--;j++;}
                       else if(v[j]==1&&c>0){
                           c--;j++;
                       }
                       else {
                           i++;
                           cout<<i<<" "<<t<<" "<<c<<endl;
                           c=0;
                       }
                   }
               }
           }
      //    cout<<i<<" "<<j<<" "<<t<<" "<<c<<endl;
           ans=max(ans,c);
       } 
        return ans;
    }
};