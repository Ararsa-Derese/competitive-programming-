class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        ans=[-1,-1]
        a=0
        for i in range(len(nums)):
            if a==1:
                if nums[i]!=target:
                    ans[1]=i-1
                    break
                continue
            if nums[i]==target:
                ans[0]=i
                a+=1
        if ans[1]==-1 and ans[0]!=-1:
            ans[1]=len(nums)-1
        return ans

        