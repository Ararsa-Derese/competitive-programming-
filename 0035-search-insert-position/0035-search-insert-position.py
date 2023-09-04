class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
         if target>nums[-1]:
              return len(nums)
         if target<nums[0]:
             return 0
         for i in range(len(nums)):
             if nums[i]==target:
                 return i
             if nums[i]>target:
                 return i
        
         return 0