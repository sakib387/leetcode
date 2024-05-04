class Solution {
public:
    void gameOfLife(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int>>x;
        x=v;
        for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                             int c=0;
                if(i+1<n){
                    c+=v[i+1][j];
                }
                if(i-1>=0){
                    c+=v[i-1][j];
                }
                if(j+1<m){
                   c+=v[i][j+1];
                }
                if(j-1>=0){
                    c+=v[i][j-1];
                }
                if(i+1<n&&j+1<m){
                    c+=v[i+1][j+1];
                }
                 if(i+1<n&&j-1>=0){
                    c+=v[i+1][j-1];
                }
                 if(i-1>=0&&j+1<m){
                     c+=v[i-1][j+1];
                     if(i==1&&j==0){
                         cout<<v[i][j]<<" "<<v[i-1][j+1]<<endl;
                     }
                }
                 if(i-1>=0&&j-1>=0){
                    c+=v[i-1][j-1];
                }
                // cout<<i<<" "<<j<<" "<<c<<endl;
                if(c<2||c>3){
                    x[i][j]=0;
                }
                if(c==3){
                    x[i][j]=1;
                }
               
                 
            }
        }v=x;
    }
};