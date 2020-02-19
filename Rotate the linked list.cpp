/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int count =1;
    ListNode *tail = A;
    ListNode *current = A;
    while(tail->next)
    {
        count++;
        tail = tail->next;
    }
    if(B>=count)
     B=B%count;
    if(B==0)
     return A;
    count = count-B-1;
    while(count--)
     current = current->next;
    tail->next = A;
    A = current->next;
    current->next = NULL;
    return A;
    
}
