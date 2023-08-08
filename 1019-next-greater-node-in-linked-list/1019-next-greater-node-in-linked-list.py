# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nextLargerNodes(self, head: Optional[ListNode]) -> List[int]:
        temp=head
        c=0
        while temp:
            c+=1
            temp=temp.next
        ans=[0]*c
        st=[]
        ptr=head
        i=0
        while ptr:
            while st and ptr.val > st[-1][0]:
                tem,indx=st.pop()
                ans[indx]=ptr.val
            st.append([ptr.val,i])
            i+=1
            ptr=ptr.next
            
        return ans
                
        
            