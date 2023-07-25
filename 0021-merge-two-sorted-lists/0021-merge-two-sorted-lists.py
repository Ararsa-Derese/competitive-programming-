# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        temp=list1
        temp1=list2
        ans=ListNode(0)
        ptr=ans
        while (temp and temp1):
            if temp.val > temp1.val:
                ptr.next=ListNode(temp1.val)
                ptr=ptr.next
                temp1=temp1.next
            else:
                ptr.next=ListNode(temp.val)
                ptr=ptr.next
                temp=temp.next
        while temp:
            ptr.next=ListNode(temp.val)
            ptr=ptr.next
            temp=temp.next
        while temp1:
            ptr.next=ListNode(temp1.val)
            ptr=ptr.next
            temp1=temp1.next
            
        return ans.next
            