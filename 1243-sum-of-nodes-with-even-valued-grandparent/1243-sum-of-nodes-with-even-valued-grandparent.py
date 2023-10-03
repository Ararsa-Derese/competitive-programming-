# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        if not root:
            return 0
		   
        q = [root]
        s = 0
        while q:
            curr = q.pop()
            if curr:
                q+=[curr.right, curr.left]
                if curr.val%2==0:
                    if curr.left:
                        if curr.left.left:
                            s+=curr.left.left.val
                        if curr.left.right:
                            s+=curr.left.right.val
                    if curr.right:
                        if curr.right.left:
                            s+=curr.right.left.val
                        if curr.right.right:
                            s+=curr.right.right.val
        return s