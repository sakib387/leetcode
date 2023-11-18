class Solution {
public:
    string shortestPalindrome(string s) {
        int fl=0,i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){fl=1;break;}i++;j--;
        }
      string  s1=s;
        reverse(s.begin(),s.end());
        s1+="#"+s;
        
        int pi[200000]={0};
        j=0;
        for(int i=1;i<s1.size();){
            if(s1[i]==s1[j]){
                j++;pi[i]=j;i++;
            }
            else{
                if(j==0)i++;
                else j=pi[j-1];
            }
        }
        int k=pi[s1.size()-1];
         reverse(s.begin(),s.end());
       // s1=reverse(s.begin()+k,s.end());
        s1="";
        for(int i=s.size()-1;i>=k;i--)s1+=s[i];
        s1+=s;
        return s1;
        
    }
};