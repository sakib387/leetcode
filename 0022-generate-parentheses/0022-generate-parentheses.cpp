class Solution {
public:
    vector<string>v;

void regular(string s,int op,int cl){
    //cout<<op<<" "<<cl<<endl;
   if(op==0&&cl==0){
    v.push_back(s);return;
   }
   else if(op<cl){
    if(op>0)
    regular(s+'(',op-1,cl);
    regular(s+')',op,cl-1);
   }
   else if(op==cl){
     regular(s+'(',op-1,cl);
   }
   else{
    return;
   }
}
    vector<string> generateParenthesis(int n) {
         regular("",n,n);
        return v;
    }
};