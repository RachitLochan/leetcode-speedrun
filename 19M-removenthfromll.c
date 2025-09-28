/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // answer looked from swarnim28
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    struct ListNode * s= (struct ListNode*)malloc(sizeof(struct ListNode));
    s->val = 0;
    s->next = head;

    struct ListNode*p = s; // we take 2 ponters
    struct ListNode *q = s;
    
    for(int i = 0; i<=n; i++){
        if(p == NULL){
            return head;
        }
        p =p->next;//we keep one pointer few steps frowawrd
   }
    
    while(p != NULL){
        p = p->next;
        q = q->next;    
    
    }  // now we update both pointer in same speed but now both pointer will have n diffrce
    struct ListNode * temp = q->next;
    q->next = temp->next;
    free(temp);

    struct ListNode*newhead = s->next;
    free(s);
    return newhead;

}
