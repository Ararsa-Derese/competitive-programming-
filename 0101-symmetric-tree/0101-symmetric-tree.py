# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        self.ans=True
        def dfs(right,left):
            if not right and not left:
                return
            if not right or not left:
                self.ans=False
                return
            if right.val!=left.val:
                self.ans=False
            dfs(right.right,left.left)
            dfs(left.right,right.left)
        dfs(root,root)    
        return self.ans