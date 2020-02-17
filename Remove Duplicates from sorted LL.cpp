/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *head = A;
    if(head == NULL)
     return head;
    
    ListNode *temp=NULL;
    while( head->next !=NULL)
    {
        
       
        if(head->val == (head->next)->val)
        {
            
            temp = head->next->next;
            delete (head->next);
            head->next = temp;
            
        }
        else
        {
            head = head ->next;
        }
    }
    return A;
}
