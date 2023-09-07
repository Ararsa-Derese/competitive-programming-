class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        graph=defaultdict(list)
        for i,j in edges:
            graph[j].append(i)
        ans=[]
        for i in range(n):
            if i not in graph:
                ans.append(i)
        return ans
