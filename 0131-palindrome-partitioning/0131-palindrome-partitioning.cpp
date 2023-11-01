class Solution {
    
    
    vector<string>vs;
bool check(int i,int j,string s){
   while(i<=j){
    if(s[i]!=s[j])return false;
    i++;j--;
   }
   return true;
}
void cal(string s,int ind,string ans)
{
    if(ind==s.size())
    {
        if(ans.size())ans.pop_back();
        if(ans.size())
            vs.push_back(ans);
        return;
    }
    for(int i=ind; i<s.size(); i++)
    {
       if(check(ind,i,s)){
            string s1=ans+s.substr(ind,i-ind+1)+" ";
        cal(s,i+1,s1);
       }
    }
}
public:
    vector<vector<string>> partition(string s) {
         cal(s,0,"");
        vector<string>v;
        vector<vector<string>>vv;
        for(int i=0;i<vs.size();i++){
            string s=vs[i];string s2;
            for(int j=0;j<s.size();j++){
                if(s[j]==' ')v.push_back(s2),s2="";
                else
                s2+=s[j];
            }
            if(s2.size())v.push_back(s2),s2="";
               vv.push_back(v);v.clear();
        }
     
        return vv;
    }
};