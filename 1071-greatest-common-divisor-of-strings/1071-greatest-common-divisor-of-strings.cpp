class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1){
            return "";
        }
        int c=__gcd(str1.size(),str2.size());
        string s="";
        for(int i=0;i<c;i++){
            if(str1[i]!=str2[i]){
                break;
            }
            s+=str2[i];
        }
        return s;
        
    }
};