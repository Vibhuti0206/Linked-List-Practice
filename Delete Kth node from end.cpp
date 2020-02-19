/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int helper(ListNode *A)
{
    int count = 0;
    ListNode *temp = A;
    //if(temp == NULL)
     //return 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* fast= A;
    ListNode *slow = A;
    int length=helper(A);
    
    ListNode *temp=NULL;
    ListNode *prev = NULL;
    
    if(A == NULL)
     return NULL;
    if(B >= length)
    {
        temp = A;
        A = A->next;
        delete temp;
        return A;
    }
    while(B--)
    {
        fast = fast->next;
    }
    while(fast!=NULL)
    {
        fast = fast->next;
        prev = slow;
        slow = slow->next;
        //fast = fast->next;
    }
    prev->next = slow->next;
    delete slow;
    return A;
    
}
