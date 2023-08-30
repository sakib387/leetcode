class Solution {

public:
    int a=1;string s;
 void palindrom(int i, int j){
        if(i>=j){
            return ;
        }
        if(s[i]==s[j]){
            palindrom(i+1,j-1);
        }
        else {
    // cout<<i<<" "<<j<<" "<<s[i]<<" "<<s[j]<<endl;
                a=0;
        }
       // return 1;
    }

    string longestPalindrome(string ss) {
        string s1="";s=ss;
     
         for(int i=0;i<s.size();i++){
             for(int j=i;j<s.size();j++){
                 a=1;
                 palindrom(i,j);
                 if(a==1 &&abs(i-j)>=s1.size()){s1="";
                     for(int x=i;x<=j;x++){
                         s1+=s[x];
                     }
                 }
             }
         }
        return s1;
    }
};