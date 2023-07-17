/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* ptr = node;
        while(ptr->next!=NULL){
            ptr=ptr->next;
            node->val=ptr->val;
           if(ptr->next!=NULL)
            node=node->next;
        }
        node->next=NULL;
  }
};