# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        que=deque()
        ans=[]
        que.append(root)
        while que:
            qLen=len(que)
            sum=0
            for i in range(qLen):
                node=que.popleft()
                sum+=node.val
                if node.right:
                    que.append(node.right)
                if node.left:
                    que.append(node.left)
            
            ans.append(sum/qLen)
        return ans

