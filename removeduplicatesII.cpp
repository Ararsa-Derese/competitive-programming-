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
        if(head==NULL || head->next==NULL)
        return head;
      ListNode* curr=head;
        ListNode* temp=head;
        ListNode* ptr=temp->next;
        int a=temp->val;
        int c=0;
        int b=0;
        while(temp->next!=NULL){
            if(a==ptr->val){
                while(ptr->val==a){
                    ptr=ptr->next;
                    if(ptr==NULL){
                        if(c==0)
                        head=NULL;
                    curr->next=NULL;
                    
                    return head;
                    }

                }
                temp->val=ptr->val;
                temp->next=ptr->next;
                ptr=temp->next;
                 a=temp->val;

               
            }
            else{
                c++;
                
            temp=temp->next;
            if(b!=0)
            curr=curr->next;
            b++;
            ptr=ptr->next;
            a=temp->val;
            }
        }
      return head;
    }
};
