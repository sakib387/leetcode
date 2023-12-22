class Solution {
    map<string,int>m;
    vector<string>v;
    string s;
    void cal(int a,int sz,string tm){
        if(a==sz){
            reverse(tm.begin(),tm.end());
            tm.pop_back();
             reverse(tm.begin(),tm.end());
            v.push_back(tm);return;
        }
        string s1;
        for(int i=1;i<=sz-a;i++){
             s1 = s.substr(a, i);
        if(m[s1]){
            cal(a+i,sz,tm+" "+s1);
        }
        }
      return;
    }
public:
    vector<string> wordBreak(string s1, vector<string>& w) {
        for(int i=0;i<w.size();i++){
            m[w[i]]=1;
        }
        s=s1;
        
        cal(0,s.size(),"");
        return v;
        
    }
};