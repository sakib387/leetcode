/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int fund=0,tr;map<long,int>m;
    void cal(TreeNode* rt,long long sm){
        if(rt==NULL)return ;
         sm+=rt->val;
        if(sm==tr)fund++;
       // if(m[sm-tr]>0)fund+=m[sm-tr];
        if(m.find(sm - tr) != m.end()){fund+=m[sm-tr];
                                      
                                      
                                      cout<<sm<<" "<<tr<<endl;
                                      }
        m[sm]++;
        cal(rt->left,sm);
        cal(rt->right,sm);
        m[sm]--;
      
        
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        tr=targetSum;
        //map<int,int>m;
        cal(root,0);
        return fund;
    }
};