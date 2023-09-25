# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        self.ans=0
        def dfs(s,root):
            s+=str(root.val)
            if not root.right and not root.left:
                self.ans+=int(s)
            else:
                if root.left:
                    dfs(s,root.left)
                if root.right:
                    dfs(s,root.right)
        dfs("",root)
        return self.ans

