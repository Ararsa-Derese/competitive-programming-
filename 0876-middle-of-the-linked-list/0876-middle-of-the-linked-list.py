# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        c,t=0,0
        temp=head
        ans=head
        while(temp):
            c+=1
            temp=temp.next
            
        while(t!=c//2):
            t+=1
            ans=ans.next
            
        return ans