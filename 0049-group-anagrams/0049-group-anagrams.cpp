class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) {
       vector<vector<string>>an ;
        map<string,int>m;
        int l=0;
        for(int i=0;i<v.size();i++){
            string s=v[i];
            sort(s.begin(),s.end());
            if(m[s]==0){
                 an.push_back(vector<string>{v[i]});
                m[s]=l+1;l++;
            }
            else{
               an[m[s]-1].push_back(v[i]);  
            }
            cout<<s<<" "<<m[s]<<" "<<v[i]<<endl;
             
        }
       // reverse(an.begin(),an.end());
        return an;
    }
};