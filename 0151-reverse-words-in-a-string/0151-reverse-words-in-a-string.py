class Solution:
    def reverseWords(self, s: str) -> str:
            li=s.split()
            li.reverse()
            ans=' '.join(li)
            return ans