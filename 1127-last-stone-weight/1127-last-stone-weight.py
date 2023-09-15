from sortedcontainers import SortedList
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        s = SortedList(stones)
        while len(s) > 1:
            y = s.pop()
            x = s.pop()

            if x != y:
                y -= x
                s.add(y)
        if s:
            return s[0]
        return 0