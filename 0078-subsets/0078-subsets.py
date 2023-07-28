class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        if not nums:
            return [[]]
        ans=[[]]
        for i in nums:
            n=len(ans)
            for j in range(n):
                li=list(ans[j])
                li.append(i)
                ans.append(li)
                
        return ans
                