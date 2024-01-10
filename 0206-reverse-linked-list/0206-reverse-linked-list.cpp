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
    ListNode* reverseList(ListNode* head) {
        ListNode* pr=NULL;
        ListNode* tm=head;
        ListNode* cur=tm;
        if(tm==NULL)return tm;
        if(tm->next==NULL)return tm;
      
        while(tm){
             
             cur=tm;
             tm=tm->next;
            
            cur->next=pr;
            pr=cur;
           // cur=tm->next;
            
            
        }
        return cur;
    }
};