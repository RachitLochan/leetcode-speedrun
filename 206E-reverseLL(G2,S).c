/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *current= head;
    struct ListNode *pre;
    struct ListNode *new;
    pre=NULL;
    if(head==NULL){return head;}
    while(current!=NULL){
        new=current->next;
        current->next=pre;
        pre=current;
        current=new;

    }return pre;

}
