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
    ListNode* rotateRight(ListNode* head, int k) {
          ListNode* cur=head;
        int length=0;
        
        if(k<=0|| head==NULL||head->next==NULL)
            return head;

        while(cur){
            cur=cur->next;
            length++;
        }
       
        k=k%length;

       
        if(k==0){
            return head;
        }

        
        cur=head;
        int n=length-k;
        while(--n){
            cur=cur->next;
        }

        
        ListNode* temp=cur->next;

        
        cur->next=NULL;

        
        ListNode* head1=temp;

        
        while(temp->next){
            temp=temp->next;
        }
        
        temp->next=head;
        
        return head1;
    }
};