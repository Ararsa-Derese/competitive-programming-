class Solution:
   
    def zeroFilledSubarray(self, nums: List[int]) -> int: 
            def fact(c):
                sum=0
                while c:
                   sum=sum+c
                   c-=1
                return sum
            c=0
            sum=0
            for n in nums:
                if n==0:
                    c+=1
                else:
                    if c!=0:
                        sum=sum+(fact(c))
                        c=0
            if c!=0:
                 sum=sum+(fact(c))
            return sum