class Solution {
 
public:
        vector<string>v;
  static  bool cmp(string a,string b){
    return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        
        string s;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            while(a){
                s+=(a%10)+'0';a/=10;
            }
            if(nums[i]==0)s="0";
            
            reverse(s.begin(),s.end());
             
            cout<<s<<endl;v.push_back(s);
            s="";
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++){
            cout<<v[i];s+=v[i];
        }
          reverse(s.begin(),s.end());
         while(s.back()=='0'&&s.size()>1)s.pop_back();  reverse(s.begin(),s.end());
        return s;
    }
};