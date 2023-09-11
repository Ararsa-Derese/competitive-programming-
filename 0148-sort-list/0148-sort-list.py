# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        li=[]
        temp=head
        while temp:
            li.append(temp.val)
            temp=temp.next
        ptr=head
        i=0
        li.sort()
        while ptr:
            ptr.val=li[i]
            i+=1
            ptr=ptr.next
        
        return head
