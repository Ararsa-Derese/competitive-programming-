/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
          head=NULL;
          return head;
        }
        ListNode* temp=head;
        ListNode* ptr=head;
        int c=0;
     while(temp->next!=NULL){
         c++;
         temp=temp->next;
     }
     int a=0;
     if(c-n<0)
     return head->next;
     while(a!=c-n){
         a++;
         ptr=ptr->next;
     }
     ptr->next=ptr->next->next;
     return head;
    }
};