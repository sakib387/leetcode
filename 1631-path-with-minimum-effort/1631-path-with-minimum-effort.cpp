class Solution {
public:
    vector<vector<int>>v;
    int dx[10]= {-1,0,0,1,-1,-1,1,1};
int dy[10]= {0,-1,1,0,-1,1,-1,1};
    int dp[202][202]={{0}};
    int minimumEffortPath(vector<vector<int>>& h) {
     int   n=h.size();int m=h[0].size();v=h;
        int ar[202][202]={{0}};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ar[i][j]=INT_MAX;
            }
        }
        
        priority_queue< pair<int,pair<int,int>>,vector< pair<int,pair<int,int>>>,greater< pair<int,pair<int,int>>>>pq;
        ar[0][0]=0;dp[0][0]=1;
        pq.push({0,{0,0}});
        while(pq.size()){
            int a=pq.top().second.first;
            int b=pq.top().second.second;
            int d=pq.top().first;
            pq.pop(); 
            dp[a][b]=1;
           if(dp[n-1][m-1])break;
            for(int i=0;i<4;i++){
               int na=a+dx[i];
                int nb=b+dy[i];
               
              
             if(na>=0&&na<n&&nb>=0&&nb<m&&dp[na][nb]==0){
                 int c=abs(v[a][b]-v[na][nb]);
                 c=max(c,d);
                 if(c<ar[na][nb]){
                     ar[na][nb]=c;
                     pq.push({c,{na,nb}});
                 }
             }
                
                
            }
        }
        return ar[n-1][m-1];
        
    }
};