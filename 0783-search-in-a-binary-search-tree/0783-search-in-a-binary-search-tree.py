# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        self.ans=None
        def search(root):
            if not root:
                return 
            if root.val==val:
                self.ans=root
                return
            search(root.right)
            search(root.left)
        search(root)
        return self.ans