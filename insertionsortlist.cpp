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
  void  insertion(int key, ListNode* head,int c,int i){
        if(head->val==key && i==c)
        return;
        insertion(key,head->next,c,i+1);
        if(head->val>key)
        {
          int temp=head->val;
          head->val=head->next->val;
          head->next->val=temp;
        }

    }
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head->next;
        
         int key;
         int c=1;
         int i=0;
   while(temp!=NULL){
        key=temp->val;
       insertion(key,head,c,i);
          c++;
       temp=temp->next;
    }
    return head;
    }
};
