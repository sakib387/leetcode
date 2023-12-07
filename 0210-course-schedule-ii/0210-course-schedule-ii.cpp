class Solution {
    int vis[2005];
    int cy=0;
    vector<int>gr[2005];
    stack<int>st;
    void dfs(int a){
        vis[a]=1;
        for(int i=0;i<gr[a].size();i++){
            if(vis[gr[a][i]]==0){
                dfs(gr[a][i]);
            }
            else if(vis[gr[a][i]]==1){
                cy=1;
            }
        }
        st.push(a);
      vis[a]=2;
    }
public:
    vector<int> findOrder(int n, vector<vector<int>>& v) {

        for(int i=0;i<v.size();i++){
            cout<<v[i][0]<<endl;
        gr[v[i][0]].push_back(v[i][1]);
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                
                dfs(i);
                
            }
        }
        vector<int>ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
            
        }
        reverse(ans.begin(),ans.end());
        if(cy)ans.clear();
        return ans;
    }
};