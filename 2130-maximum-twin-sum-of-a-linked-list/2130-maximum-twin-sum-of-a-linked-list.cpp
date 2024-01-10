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
class Solution {
public:
    int pairSum(ListNode* head) {
        int c=0;
        ListNode* tm=head;
        while(head){
            c++;
            head=head->next;
        }
        head=tm;
        ListNode* pr=NULL;
        ListNode* cur=tm;
            
        c/=2;
        while(c--){
            cur=tm;
            tm=tm->next;
            cur->next=pr;
            pr=cur;
        }
        int an=0;
         head=pr;
        while(tm){
          c=tm->val+head->val;
            head=head->next;
            tm=tm->next;
            cout<<c<<endl;
            an=max(an,c);
        }
        
       // cout<<head->val<<" "<<tm->val;
        return an;
    }
};