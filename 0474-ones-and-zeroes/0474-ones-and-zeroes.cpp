class Solution {
public:
    vector<vector<vector<int>>>dp;vector<pair<int,int>>v;
    int findMaxForm(vector<string>& arr, int m, int n) 
   {
    dp.resize(arr.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1))); 
      //pair<one,zero>
    
	for(int i=0;i<arr.size();i++)
	{
		string str=arr[i];
		int one=0;
		int zero=0;
		
		for(int j=0;j<str.length();j++)
		{
			if(str[j]=='0')
			{
				zero++;
			}
			else if(str[j]=='1')
			{
				one++;
			}
		}
	    v.push_back(make_pair(zero,one));
	}
	int idx=0;
	return cal(idx,m,n);        
}
int cal(int a,int n,int m)
{
   if(a>=v.size())return 0;
   //if(n<0||m<0)return 0;
   if(dp[a][n][m]!=-1)return dp[a][n][m];
 
   int x=0;int y=0;
   if(n-v[a].first>=0 && m-v[a].second>=0){

    x=1+cal(a+1,n-v[a].first,m-v[a].second);
   }
   y=cal(a+1,n,m);
   //cout<<x<<" "<<y<<endl;
   return dp[a][n][m]=max(x,y);
}
};