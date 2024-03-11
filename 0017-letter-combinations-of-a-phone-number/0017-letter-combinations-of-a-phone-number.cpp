class Solution {
    vector<string>va;
    vector<string>vs;
    
    void fun(string s, string ss ){
         if(s.size()==0){
             reverse(ss.begin(),ss.end());
             vs.push_back(ss);
             return;
         }
        int c=s.back()-'0';
        s.pop_back();
        string sa=va[c];
        for(int i=0;i<sa.size();i++){
            fun(s,ss+sa[i]);
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
  
       va.push_back("");
       va.push_back("");
        va.push_back("abc");
        va.push_back("def");
        va.push_back("ghi");
        va.push_back("jkl");
        va.push_back("mno");
        va.push_back("pqrs");
        va.push_back("tuv");
        va.push_back("wxyz");
       if(digits.size())
       fun(digits,"");
        return vs;
    }
};