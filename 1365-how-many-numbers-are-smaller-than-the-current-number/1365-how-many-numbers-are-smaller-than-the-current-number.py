class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        count=0
        ans=[0]*len(nums)
        for i in range(len(nums)):
                for j in nums:
                    if nums[i]>j:
                        count+=1
                
                ans[i]=count
                count=0
        return ans