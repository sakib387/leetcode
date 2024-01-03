class Solution {
    
    struct Node{
        
        int c;
        Node* ar[26];
        Node(){
            for(int i=0;i<26;i++){
                ar[i]=NULL;
            }
            c=0;
        }
    };
     Node * root;
    vector<int>v;
     void insert(  string s) {
        Node* tm=root;
        for(int i=0;i<s.size();i++){
            int a=s[i]-'a';
            if(tm->ar[a]==NULL){
                tm->ar[a]=new Node();
            }
            tm->ar[a]->c++;
            tm=tm->ar[a];
        }
    }

    int sum(  string s ) {
       int an=0;
        
        Node* tm=root;
        for(int i=0;i<s.size();i++){
            int a=s[i]-'a';
             an+=tm->ar[a]->c;
            tm=tm->ar[a];
        }
        return an;
    }
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        root=new Node();
        for(int i=0;i<words.size();i++){
            insert(words[i]);
        }
        for(int i=0;i<words.size();i++){
            int c=sum(words[i]);
            v.push_back(c);
        }
        return v;
    }
};