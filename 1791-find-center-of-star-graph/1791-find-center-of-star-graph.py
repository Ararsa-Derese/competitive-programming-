class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        
        a=1
        b=1
        for i in range(1,len(edges)):
            for j in range(2):
                if edges[i][j] ==edges[0][0]:
                    a+=1
                if edges[i][j] ==edges[0][1]:
                    b+=1
        if a>b:
            return edges[0][0]
        return edges[0][1]