class Solution:
   
    def zeroFilledSubarray(self, nums: List[int]) -> int: 
          
            c=0
            sum=0
            for n in nums:
                if n==0:
                    c+=1
                else:
                    if c!=0:
                        sum=sum+(int(((1+c)/2)*c))
                        c=0
            if c!=0:
                 sum=sum+(int(((1+c)/2)*c))
            return sum