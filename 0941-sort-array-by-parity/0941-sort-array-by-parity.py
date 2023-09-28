class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        even, odd = 0, len(nums) - 1
        while even < odd:
            if nums[even] % 2 == 0:
                even += 1
            elif nums[odd] % 2 == 1:
                odd -= 1
            else:
                nums[even], nums[odd] = nums[odd], nums[even]
        return nums
        