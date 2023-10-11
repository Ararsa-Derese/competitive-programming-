class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        s.sort()
        g.sort()
        ans=0
        j=0
        
        for i in range(len(s)):
            if s[i]>=g[j]:
                ans+=1
                j+=1
            if j==len(g):
                break
        return ans
            
