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
   ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *temp = head;
    ListNode *tp = head;
    int count = 0;

    while (temp!= nullptr) {
        temp = temp->next;
        count++;
    }
       temp=head;

    if (count == 1 && n == 1) {
        return NULL;
    }

     
    count -= n;
   temp=head;
    
    if (count == 0) {
        head = head->next;
        return head;
    }

  
    for (int i = 0; i < count; i++) {
        tp = temp;
        temp = temp->next;
    }

    // Remove the node
    tp->next = temp->next;

    return head;
}

};