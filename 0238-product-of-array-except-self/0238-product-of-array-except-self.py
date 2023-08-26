class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product=1
        zero=0
        ans=[0]*len(nums)
        for num in nums:
            if num==0:
                zero+=1
            else:
                product*=num
        if zero==0:
            for i in range(len(nums)):
                ans[i]=int (product/nums[i])
        elif zero==1:
            for i in range(len(nums)):
                if nums[i]==0:
                    ans[i]=product
        
        return ans 
                