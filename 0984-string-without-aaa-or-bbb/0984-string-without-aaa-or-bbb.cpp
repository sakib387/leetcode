class Solution {
public:
    string strWithout3a3b(int a, int b) {
        
        string s;int la=0,lb=0;
        while(a>0||b>0){
           if(a>=b&&la<2){
            s+='a';a--;la++;lb=0;
        }
        else if(a>=b){
            s+='b';b--;la=0;lb++;
        }
       else if(b>=a&&lb<2){
            s+='b';lb++;la=0;b--;
        }
       else if(b>=a){
           lb=0;la++;s+='a';a--;
       } 
        }
         
          return s;
    }
    
  
};