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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        return head;
        if(head->next==NULL)
        return head;
        ListNode * temp= head;

        ListNode * ptr = temp->next;
        while(ptr->next!=NULL){
        if(ptr->val == temp->val){
              temp->next= ptr->next;
              ptr->next=NULL;
              ptr=temp->next;
        }
        else{
            ptr=ptr->next;
            temp=temp->next;
        }
        }
         if(ptr->val == temp->val){
              temp->next= ptr->next;
              ptr->next=NULL;
              ptr=temp->next;
        }
        return head;
    }
};
