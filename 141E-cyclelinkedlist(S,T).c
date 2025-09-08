/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *s=head;
    struct ListNode *f=head;
    if (head==NULL){return false;}
    while(f->next!=NULL && f->next->next!=NULL){
        s=s->next;
        f=f->next;// so daym proud of this implemdation in knew the logic but dono how to implemet
        f=f->next; // this was my hack lol buddhi
        if(f==s){return true;}

    }
    return false;
}
