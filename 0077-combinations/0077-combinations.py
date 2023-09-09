class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        self.res, self.k = [], k
        self.dfs([i+1 for i in range(n)], [], 0)
        return self.res
    
    def dfs(self, nums, current, start):
        if len(current) == self.k:
            self.res.append(current)
            return 
        if len(current) > self.k:
            return
        for i in range(start, len(nums)):
            self.dfs(nums, current + [nums[i]], i + 1)