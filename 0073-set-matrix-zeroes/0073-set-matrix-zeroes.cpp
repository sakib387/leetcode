class Solution {
public:
    void setZeroes(vector<vector<int>>& ar) {
      int a=ar.size();
      int b=ar[0].size();
         int row[300]={0},col[300]={0};
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
              
                if(ar[i][j]==0){
                    row[i]=1;col[j]=1;
                }
            }
        }
       for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(row[i]||col[j]){
                ar[i][j]=0;
            }
        }
       }
    }
};