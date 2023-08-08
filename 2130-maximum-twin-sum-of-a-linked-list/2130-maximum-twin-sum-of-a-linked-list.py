# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        li=[]
        temp=head
        max=0
        while temp:
            li.append(temp.val)
            temp=temp.next
        i,j=0,len(li)-1
        while i<j:
            if li[i]+li[j]>max:
                max=li[i]+li[j]
            i+=1
            j-=1
        return max