class Solution:
    def maxProfit(self, prices: List[int]) -> int:
            if len(prices) == 1:
                return 0

            low = 0
            maxprofit = 0

            for i in range(len(prices)):
                  if prices[i] < prices[low]: 
                            low = i
                            continue
            
                  maxprofit= max(maxprofit, prices[i] - prices[low])
        
            return maxprofit