# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return 
        slow=head
        fast=head
        while slow and fast:
            if not fast.next:
                return 
            fast=fast.next.next
            slow=slow.next
            
            if fast==slow:
                break
            
        if not fast or not fast.next: return 
        start=head
        while slow:
            if slow==start:
                return start
            slow=slow.next
            start=start.next
            
        return 