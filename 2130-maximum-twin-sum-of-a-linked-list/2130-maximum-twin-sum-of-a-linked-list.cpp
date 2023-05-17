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
    int pairSum(ListNode* head) {
            vector<int> ans; int c=0;
      ListNode* temp=head;
      while(temp!=NULL){
          ans.push_back(temp->val);
          temp=temp->next;
      }
      int i=0,j=ans.size()-1;
      while(i<j){
         if(ans[i]+ans[j]>c)
           c=ans[i]+ans[j];
           i++;
           j--;
      }
      return c;
    }
};