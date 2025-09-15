/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode*a=headA;
    struct ListNode*b=headB;
    int count=0,count1=0;
    while(a!=NULL){                               // basically find the difreence in lenght of both then
        a=a->next;                                 // and start from thet diffrnce as commom will reach in same time then
        count=count+1;
        }
        a=headA;
    while(b!=NULL){
        b=b->next;
        count1=count1+1;
        }b=headB;

        if(count>count1){count=count-count1;
        for(int i=0;i<count;i++){
            a=a->next;
        }}

        else{count=count1-count;
        for(int i=0;i<count;i++){
            b=b->next;
        }}
        while(a!=NULL){
            if(a==b){return a;}
            a=a->next;
            b=b->next;
        }return NULL;
}
