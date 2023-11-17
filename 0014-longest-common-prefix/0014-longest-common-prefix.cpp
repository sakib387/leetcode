class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l=strs[0].size();
        string s;
         
            for(int i=0;i<strs.size();i++){
                int k=strs[i].size();
              l=min(l,k);
            }
        for(int i=0;i<l;i++){
            int fl=1;
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=strs[0][i]){
                    fl=0;
                }
            }
             
            if(fl)s+=strs[0][i];
            else break;
        }
      
     
        return s;
      
        
    }
};