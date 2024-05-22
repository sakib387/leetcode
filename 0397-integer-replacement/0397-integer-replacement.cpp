class Solution {
public:
    long long cal(long long n){
        if(n==1)return 0;
        if(n%2==0)return cal(n/2)+1;
        else return min(cal(n-1)+1,cal(n+1)+1);
    }
    int integerReplacement(int n) {
      
      return cal(n);  
    }
};