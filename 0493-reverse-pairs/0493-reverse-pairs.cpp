vector<int>v;
void merge(int l,int m,int r){
    int l1=m-l+1;
    int r1=r-m;
    int L[l1],R[r1];
    for(int i=0;i<l1;i++)L[i]=v[l+i];
    for(int i=0;i<r1;i++)R[i]=v[m+1+i];
    int i=0,j=0,k=l;
    while(i<l1&&j<r1){
        if(L[i]<=R[j]){
            v[k]=L[i];i++;
        }
        else{
            v[k]=R[j];j++;
        }
        k++;
    }
      while(i<l1){
        
            v[k]=L[i];i++;
      
        k++;
    }
      while(j<r1){
        
            v[k]=R[j];j++;
      
        k++;
    }
    
    
}
int get(int l,int m,int r){
    int j=m+1;
    int cn=0;
    for(int i=l;i<=m;i++){
        long long b=v[j];
        
        while(j<=r){
            long long c=v[j];
            c*=2;
            if(v[i]<=c)break;
            j++;
        }
        cn+=j-(m+1);
    }
    cout<<cn<<endl;
    return cn;
}
int mergesort(int l,int r){
    int cnt=0;
  if(l<r){
      int m=(l+r)/2;
      cnt+=mergesort(l,m);
      cnt+=mergesort(m+1,r);
      cnt+=get(l,m,r);
      merge(l,m,r);
  }  
    return cnt;
}

class Solution {
 
 
public:
    int reversePairs(vector<int>& nums) {
        
         v=nums;
        int ans= mergesort(0,v.size()-1);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return ans;
    
    }
};