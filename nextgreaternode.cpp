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
    vector<int> nextLargerNodes(ListNode* head) {
              vector<int> ans;
        
        ListNode *ptr=head;
        
        while (ptr!=NULL ){
            ListNode *temp=ptr->next;
            while(temp!=NULL){
                if (ptr->val<temp->val){
                    ans.push_back(temp->val);  
                    break;
                }
                else temp=temp->next;
            }
            if(temp==nullptr){
            ans.push_back(0); 
            }
            ptr=ptr->next;
        }
        return ans;
    }
};
