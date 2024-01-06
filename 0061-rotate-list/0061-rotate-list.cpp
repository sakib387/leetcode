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
    ListNode* rotateRight(ListNode* head, int k) {
        stack<ListNode*>st;
        queue<ListNode*>qe;
        int n=0;
        while(head!=NULL){
            st.push(head);n++;
            head=head->next;
        }
        if(n>0){
              int c=k%n;
        while(c--){
            qe.push(st.top());
            st.pop();
        }
        }
        ListNode* pre=NULL;
        while(st.size()){
            head=st.top();
            head->next=pre;
            pre=head;
            st.pop();
        }
         while(qe.size()){
            head=qe.front();
            head->next=pre;
            pre=head;
            qe.pop();
        }
       
        return head;
    }
};