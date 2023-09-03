class Solution {
public:
    int largestRectangleArea(vector<int>& v) {
        
         stack<pair<int,int >>st;int l=0;
       for(int i=0; i<v.size(); i++)
        {
            if(i==0)
            {
                st.push({i,v[i]});

            }
            else
            {
                int cont=i;
                while(st.top().second>v[i])
                {

                    int tp=st.top().second;
                    int pos=st.top().first;
                    cont=pos;
                    l=max(l,tp*(i-cont));
                    st.pop();
                    if(st.size()==0)break;
                }
                st.push({cont,v[i]});



            }
        }

        int cont=v.size();
        while(st.size()){
           int tp=st.top().second;

         int pos=st.top().first;

           l=max(l,(cont-pos)*tp);
           st.pop();
        }

     return l;
    // cout<<l<<endl;
        
    }
};