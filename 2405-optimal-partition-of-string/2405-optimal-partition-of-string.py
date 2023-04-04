class Solution:
    def partitionString(self, s: str) -> int:
            li=[]
            min=1
            for char in s:
                if char in li:
                    li.clear()
                    min+=1
                li.append(char)
            return min