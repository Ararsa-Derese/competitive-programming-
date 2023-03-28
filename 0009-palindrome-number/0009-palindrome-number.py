class Solution:
    def isPalindrome(self, x: int) -> bool:
                x=str(x)
                li=list(x)
                if li==li[::-1]:
                    return True
                return False