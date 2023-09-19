from sortedcontainers import SortedList
class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.s = SortedList(nums) 
        self.k=k

    def add(self, val: int) -> int:
        self.s.add(val)
        return self.s[len(self.s)-self.k]
        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)