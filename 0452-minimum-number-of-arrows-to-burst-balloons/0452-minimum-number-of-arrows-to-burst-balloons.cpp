class Solution {
public:
    
  static  bool compare(const vector<int>& a, const vector<int>& b) {
        if (a[0] != b[0]) {
            return a[0] < b[0]; 
        }
        return a[1] > b[1];  
    }
    int findMinArrowShots(vector<vector<int>>& p) {
        
        int an=0,l,r;
        sort(p.begin(), p.end(), compare);
        
        //cout<<p[0][0]<<endl;
        for(int i=0;i<p.size();i++){
            cout<<p[i][0]<<" "<<p[i][1]<<endl;
            if(i==0){
                an=1;
                l=p[i][0];
                r=p[i][1];
            }
            else{
                int nl=max(l,p[i][0]);
                int nr=min(r,p[i][1]);
                if(nl>nr){
                    an++;
                    l=p[i][0];
                    r=p[i][1];
                }
                else{
                    l=nl;
                    r=nr;
                }
            }
        }
        return an;
    }
};