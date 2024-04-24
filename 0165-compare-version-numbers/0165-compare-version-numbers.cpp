class Solution {
public:
    vector<int>v,v1;
    int check(){
        int n=v.size();
        int m=v1.size();
        int j=0,fl=0;
       for(int i=0;i<min(n,m);i++){
           cout<<v[i]<<" "<<v1[i]<<endl;
           if(v[i]>v1[i]){
               
               fl=1;break;
           }
           else if(v[i]<v1[i]){
               fl=-1;break;
           }
       }
        cout<<fl<<endl;
        if(fl==0){
            for(int i=min(m,n);i<v.size();i++){
                if(v[i]>0)fl=1;
            }
            
             for(int i=min(m,n);i<v1.size();i++){
                if(v1[i]>0)fl=-1;
            }
        }
        return fl;
    }
    int compareVersion(string version1, string version2) {
        int c=0,d=0;
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.'){v.push_back(c);c=0;}
            else {
                int n=version1[i]-'0';
              //  cout<<n<<" "<<version1[i]<<endl;
                c*=10;c+=n;
            }
            
        }
        v.push_back(c);
         for(int i=0;i<version2.size();i++){
            if(version2[i]=='.'){v1.push_back(d);d=0;}
            else {
                int n=version2[i]-'0';
                d*=10;d+=n;
            }
            
        }
        v1.push_back(d);
          c=check();
          
    return c;
    }
 
};