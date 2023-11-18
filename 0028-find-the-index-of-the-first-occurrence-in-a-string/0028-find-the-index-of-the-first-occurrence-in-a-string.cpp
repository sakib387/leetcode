class Solution {
public:
    int strStr(string s, string s1) {
    int pi[100000]={0};
      
    int  j=0;
      for(int i=1;i<s1.size();){
        if(s1[i]==s1[j]){
            j++;
            pi[i]=j;i++;
        }
        else{
            if(j==0)i++;
            else j=pi[j-1];
        }
      }
      j=0;int k=0;
      for(int i=0; i<s.size();)
        {
            if(s[i]==s1[j])
            {
                i++;
                j++;
                if(j==s1.size()){
                   return i-j;
                }
            }
            else
            {
                if(j==0)i++;
                else j=pi[j-1];
            }
        }
        return -1;
    }
};