class Solution:
    def isPalindrome(self, s: str) -> bool:
         arr = [x.lower() for x in s if x.isalnum()]
         return arr == arr[::-1]