"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if not root:
            return 0
        self.ans=1
        def dfs(root,count):
            
            if not root.children:
                if count>self.ans:
                    self.ans=count
                return
            count+=1
            for child in root.children:
                dfs(child,count)
        dfs(root,self.ans)
        return self.ans
        