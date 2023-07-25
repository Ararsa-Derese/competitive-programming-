class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        if len(s) < 1:
             return
        c = s.pop(0)
        self.reverseString(s)
        s.append(c)
         


        