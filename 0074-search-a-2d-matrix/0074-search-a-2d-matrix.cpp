class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lf=0;
        int r=matrix.size()*matrix[0].size()-1;
        int m=matrix[0].size();
        while(lf<=r){
            int md=(lf+r)/2;
            int row=md/m;
            int col=md%m;
            if(matrix[row][col]==target)return true;
            else if(matrix[row][col]>target){
                r=md-1;
            }
            else lf=md+1;
        }
        return false;
        
    }
};