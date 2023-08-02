class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i,j=0,len(numbers)-1
        ans=[]
        while i<j:
            if numbers[i]+numbers[j]==target:
                ans.append(i+1)
                ans.append(j+1)
                break
            elif numbers[i]+numbers[j]<target:
                i+=1
            else:
                j-=1
        
        return ans
                
            