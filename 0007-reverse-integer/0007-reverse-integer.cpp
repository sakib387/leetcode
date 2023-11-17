class Solution {
public:
    int reverse(int x) {
        long long a,b=0,c=0,bc=1,pc=31;
        if(x<0)c=1;
        long long e=abs(x);
       // if((1<<31)==x)return 0;
         while(e){
             b*=10;
             b+=e%10;e/=10;
         }
         if(b+1>(bc<<pc)&&c==0)return 0;
         if(b>(bc<<pc)&&c==1)return 0;
        if(c)return -b;
        else return b;
    }
};