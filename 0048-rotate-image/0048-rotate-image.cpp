class Solution {
public:
    void rotate(vector<vector<int>>& m) {
       // 0 0    0 1   1 3   2 2
       // 0 3    1 2   3 4   2 3
      //  3 3    2 1   4 2   3 3
      //  3 0    1 0   2 1   3 2
        int n=m.size()-1;
        int k=1;
        for(int i=0;i<=n/2;i++){
            for(int j=i;j<=(n-k);j++){
                
                int a=m[i][j];
                int b=m[j][n-i];
                int c=m[n-i][n-j];
                int d=m[n-j][i];
                m[i][j]=d;m[n-j][i]=c;
                m[n-i][n-j]=b;m[j][n-i]=a;
            }k++;
            
        }
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                cout<<m[i][j]<<" ";
            }cout<<endl;
        }
        
    }
};