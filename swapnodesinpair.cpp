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
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL)
     return head;
     if(head->next==NULL) 
     return head;

     ListNode * temp= head;
     ListNode * ptr=temp->next;
     ListNode * start = head;
     head=ptr;
     temp->next=ptr->next;
     ptr->next=temp;
     while(temp->next!=NULL && ptr->next!=NULL){
         start= temp;
         temp=temp->next;
         ptr=temp->next;
         if(ptr==NULL)
         return head;
          start->next=ptr;
     temp->next=ptr->next;
     ptr->next=temp;
              }
              return head;
       
    }
};
