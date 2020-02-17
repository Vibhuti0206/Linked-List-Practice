/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode *midpoint(ListNode *A)
{
    ListNode *head = A;
    if(head == NULL || head->next == NULL)
     return head;
    ListNode *slow = A;
    ListNode *fast = A;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
int Solution::lPalin(ListNode* A) {
  
    ListNode *p = NULL;
    ListNode *rtemp = midpoint(A);
    ListNode *c = rtemp;
    ListNode *x;
    while(c!=NULL)
    {
        x = c->next;
        c->next = p;
        p = c;
        c = x;
    }
    rtemp = p;
    rtemp = rtemp;
    int flag =1;
    while(rtemp!=NULL)
    {
        if(A->val == rtemp->val)
        {
            A=A->next;
            rtemp = rtemp->next;
        }
        else
         {
             flag =  0;
             break;
         }
    }
   if(flag)
    return 1;
   else
    return 0;
}
