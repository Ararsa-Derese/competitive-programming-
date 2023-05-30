class Solution:
    def maxCoins(self, piles: List[int]) -> int:
            count=0
            piles.sort()
            n=len(piles)-2
            max=0
            while(count<(len(piles)/3)):
                   max=max+piles[n]
                   n-=2
                   count+=1

        
            return max;