class Solution {
public:
   vector<int> gr[20005];
int in[20005]={0};
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& v){
        for(int i=0;i<v.size();i++){
            int c=v[i][0];
            int d=v[i][1];
            gr[c].push_back(d);
            gr[d].push_back(c);
            in[c]++;in[d]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(in[i]==1)q.push(i);
        }
        while(n>2){
            n-=q.size();
           int d=q.size();
            while(d--){
                int c=q.front();
                q.pop();
                for(int i:gr[c]){
                   in[i]--;
                    if(in[i]==1){
                        q.push(i);
                    }
                }
            }
        }
        vector<int>ans;
        while(q.size()){
            ans.push_back(q.front());q.pop();
        }
        if(v.size()==0){
        ans.push_back(0);
        }
        return ans;
    }
};