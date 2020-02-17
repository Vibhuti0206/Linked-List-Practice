/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *head1 = A;
    ListNode *head2 = B;
    
    if(head1 == NULL)
      return head2;
    if(head2 == NULL)
      return head1;
   ListNode *head3;
     if(head1->val < head2->val)
      {
          head3 = head1;
          head3->next=mergeTwoLists(A->next,B);
      }
     else
     {
         
      head3 = head2;
      head3->next = mergeTwoLists(A,B->next);
    }
     return head3;
    
}
