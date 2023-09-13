# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        
        self.li=[]
        def search(root):
            if not root:
                return 
            self.li.append(root.val)
            search(root.right)
            search(root.left)
        search(root)
        self.li.sort()
        return self.li[k-1] 