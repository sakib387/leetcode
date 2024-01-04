class Solution {
    vector<int>v;
    void dfs(int i,int n){
        if(i>n)return ;
        v.push_back(i);
        for(int j=0;j<=9;j++){
            dfs(i*10+j,n);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        
        for(int i=1;i<=9;i++){
            dfs(i,n);
        }
        return v;
    }
};