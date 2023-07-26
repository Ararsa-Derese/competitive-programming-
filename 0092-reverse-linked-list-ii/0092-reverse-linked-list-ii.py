# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        li=[]
        temp=head
        c=1
        while(c<=right and temp):
            if c>=left:
                li.append(temp.val)
            c+=1 
            temp=temp.next
        li=li[::-1]
        a=1
        ptr=head
        i=0
        while a<=right and ptr:
            if a>=left:
                ptr.val=li[i]
                i+=1
            a+=1
            ptr=ptr.next
            
        return head
            
            
            