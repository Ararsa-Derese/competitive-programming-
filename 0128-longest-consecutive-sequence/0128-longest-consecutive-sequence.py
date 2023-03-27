class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
            if len(nums)==0:
                 return 0
            if len(nums)==1:
                 return 1
            c=1
            max=0
            nums.sort()
            for i in range(1,len(nums)):
                    if nums[i]==nums[i-1]+1:
                         c+=1
                    else:
                        if nums[i]==nums[i-1]:
                            continue
                        if max<c:
                            max=c
                        c=1
            if max<c:
                max=c
            return max
            
                
                
        