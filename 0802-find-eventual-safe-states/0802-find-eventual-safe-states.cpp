class Solution {
public:
    vector<int>gr[10005];
    int in[10005];
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        memset(in,0,sizeof(in));
        for(int i=0;i<graph.size();i++){
           for(int j=0;j<graph[i].size();j++){
               int c=graph[i][j];
               gr[c].push_back(i);
               in[i]++;
           } 
        }
        queue<int>pq;
        vector<int>v;
        for(int i=0;i<graph.size();i++){
            if(in[i]==0){
                pq.push(i);
            }
        }
        while(pq.size()){
            int c=pq.front();
            v.push_back(c);
            pq.pop();
            for(int i:gr[c]){
                in[i]--;
                if(in[i]==0){
                    pq.push(i);
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};