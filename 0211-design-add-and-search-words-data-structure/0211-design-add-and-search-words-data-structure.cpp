class WordDictionary {
    struct Node{
        Node* next;
        int end;
        Node* ar[27];
        Node(){
            next=NULL;
            end=0;
           for(int i=0;i<=26;i++){
               ar[i]=NULL;
           }
        }
    };
    Node* root;
    void add(Node* rt,string s,int in){
        if(in==s.size()){
            rt->end=1;
            return;
        }
        int c=s[in]-'a';
        if(rt->ar[c]){
            add(rt->ar[c],s,in+1);
        }
        else{
            rt->ar[c]=new Node();
            add(rt->ar[c],s,in+1);
        }
    }
    int find(Node* rt,string s,int in){
        if(in==s.size()){
            if(rt->end==1)return 1;
            else return 0;
        }
        if(s[in]=='.'){
            for(int i=0;i<26;i++){
                if(rt->ar[i]&&find(rt->ar[i],s,in+1)){
                    return 1;
                }
            }
            return 0;
        }
        else{
            int c=s[in]-'a';
            if(rt->ar[c])
             
               return find(rt->ar[c],s,in+1);
            else return 0;
           
        }
        return 0;
    }
public:
    WordDictionary() {
         root=new Node();
    }
    
    void addWord(string word) {
        add(root,word,0);
    }
    
    bool search(string word) {
        return find(root,word,0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */