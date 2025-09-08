/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next; took help from swarnim28
 * };
 *///need to learn more about continouse of linked list 
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL){return head;}
    struct ListNode *s = head;
    while(s!=NULL && s->next!=NULL){
        
        if(s->val==s->next->val){
            
            struct ListNode *temp=s->next;
            s->next=s->next->next;//lil need to understand
            free(temp);
        }
        else{s=s->next;}
        
    }return head;
}
