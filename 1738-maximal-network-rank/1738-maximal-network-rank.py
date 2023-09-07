class Solution:
    def maximalNetworkRank(self, n: int, roads: List[List[int]]) -> int:
        graph = defaultdict(list)
        for a,b in roads:
            graph[a].append(b)
            graph[b].append(a)
        ans=0
        for i in range(n):
            for j in range(i+1,n):
                sum=len(graph[i])+len(graph[j])
                if i in graph[j] or j in graph[i]:
                     sum-=1
                ans=max(ans,sum)

        return ans

