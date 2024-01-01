class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& q) {
        int ar[100005]={0};
        int l=0;
        map<int ,int>m;
        //cout<<s.size()<<endl;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){l++;
                         m[l]=i;
                         }
            ar[i]=l;
        }
        vector<int>v;
        for(int i=0;i<q.size();i++){
           int c=q[i][0];int d=q[i][1];
             l =ar[c];
             if(m[l]!=c){
                 l++;
             }
            if(l==0)l=1;
            int r=ar[d];
            if(m[r]>d){
                r--;
            }
            if(l<r){
               int d=r-l;
                cout<<l<< " "<<r<<" "<<d<<endl; 
                l=m[l];
                r=m[r];
                
                l=r-l-d;
                if(l<0)l=0;
                v.push_back(l);
            }
            else v.push_back(0);
        }
return v;        
        
    }
};