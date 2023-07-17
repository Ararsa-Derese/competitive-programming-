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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode * l3 =  new ListNode(0);
      ListNode * head=l3;
     int c=0,sum=0;
      while(l1!=NULL && l2!=NULL){
           sum=l1->val+l2->val+c;
              if(sum>9){
              c=sum/10;
              sum=sum%10;
              }
               else
              c=0;
           l3->next=new ListNode(sum);
           l3=l3->next;

           l1=l1->next;
           l2=l2->next;
            }
            while(l1!=NULL){
                 sum=l1->val+c;
              if(sum>9){
              c=sum/10;
              sum=sum%10;
              }
               else
              c=0;
           l3->next=new ListNode(sum);
           l3=l3->next;

           l1=l1->next;
           
            }
             while(l2!=NULL){
           sum=l2->val+c;
              if(sum>9){
              c=sum/10;
              sum=sum%10;
              }
               else
              c=0;
           l3->next=new ListNode(sum);
           l3=l3->next;

           
           l2=l2->next;
            }
            if(c>0){
                l3->next=new ListNode(c);
            }
            
            return head->next;
    }
};