# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        self.ans=cloned
        def dfs(root):
            if not root: 
                return 
            if root.val==target.val:
                self.ans=root
                return
            dfs(root.right)
            dfs(root.left)
        dfs(cloned)
        return self.ans
        

