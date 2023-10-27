class Solution {
    int ar[305][305];
int cal(int a,int b)
{
   int age[305]= {0};
    int pore[305]= {0};
    stack<int>st;
    st.push(-1);
    for(int i=0; i<b; i++)
    {
        int c=ar[a][i];
        if(st.size()>1&&ar[a][st.top()]>=c)
        {
            while(st.size()>1&&ar[a][st.top()]>=c)st.pop();
        }
        age[i]=st.top();
        st.push(i);
    }
    while(st.size())st.pop();st.push(-1);
    for(int i=b-1;i>=0;i--){
        int c=ar[a][i];
        if(st.size()>1&&ar[a][st.top()]>=c)
        {
            while(st.size()>1&&ar[a][st.top()]>=c)st.pop();
        }
        pore[i]=st.top();
        if(pore[i]==-1)pore[i]=b;
        st.push(i);
    }
   int ans=0;
    for(int i=0;i<b;i++){
       int c=pore[i]-age[i]-1;
       int d=ar[a][i];
        if(c<=ar[a][i])ans=max(ans,c);
        else ans=max(ans,d);
    }
    return ans;

}
    
public:
    int maximalSquare(vector<vector<char>>& vr) {
        for(int i=0; i<vr.size(); i++)
        {
            for(int j=0; j<vr[i].size(); j++)
            {
                if(vr[i][j]=='1')
                {
                    if(i==0)
                    {
                        ar[i][j]=1;
                    }
                    else
                    {
                        ar[i][j]=ar[i-1][j]+1;
                    }
                }
            }
        }
        int ans=0;
        for(int i=0; i<vr.size(); i++)
        {
          int  l=cal(i,vr[i].size());
            ans=max(ans,l);
        }
        return ans*ans;
    }
};