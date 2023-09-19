class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums=sorted(nums)
        ans=0
        for i in range(len(nums)-1):
            if nums[i]==nums[i+1]:
                ans=nums[i]
                break
        return ans 