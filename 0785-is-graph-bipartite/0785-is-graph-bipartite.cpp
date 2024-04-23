class Solution {
public:
     int vis[1001]={0};
    int col[101]={0};
    vector<vector<int>>graph;
    bool bfs(int a){
         vis[a]=1;
        col[a]=1;
        queue<int>q;
        q.push(a);
        while(q.size()){
            int c=q.front();q.pop();
            vis[c]=2;
            for(int i:graph[c]){
                if(vis[i]==0){
                    if(col[c]==1)col[i]=2;
                    else col[i]=1;
                    vis[i]=1;
                    q.push(i);
                }
                if(vis[i]==1&&col[i]==col[c])return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& g) {
        graph=g;
    for(int i=0;i<g.size();i++){
        if(vis[i]==0){
            bool c=bfs(i);
            if(c==false)return false;
        }
    }
        return true;
    }
};