/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *first=head;
    struct ListNode *second=head;
    if(head==NULL){return head;}
    if(head->next==NULL){return head;}
    if(head->next->next==NULL){return head->next;}
 while(first!=NULL&& first->next != NULL){
    first=first->next;
    second=second->next;
    first=first->next;
 }   return second;
}
