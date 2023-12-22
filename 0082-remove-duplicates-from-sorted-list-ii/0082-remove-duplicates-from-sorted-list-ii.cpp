/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
ListNode* cal(ListNode* he){
    if(he==nullptr)return he;
    
    if(he->next){
        ListNode* tm=new ListNode();
        tm=he;
        if(tm->val==tm->next->val){
            while(tm->next&&tm->val==tm->next->val){
                tm=tm->next;
               // cout<<"S"<<endl;
            }
            //cout<<he->val<<" a "<<tm->val<<" "<<tm->next->val<<endl;
            he = tm->next;

          //  cout<<he->val<<" p "<<tm->val<<" "<<tm->next->val<<endl;
           he= cal(he);
        }
        else{
           he->next= cal(he->next);
        }
    }
    return he;
}
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        head=cal(head);
        return head;
    }
};