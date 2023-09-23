class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        row=len(isConnected)
        col=len(isConnected[0])
        visited=set()
        graph=defaultdict(list)
        self.ans=0
        def dfs(li):
            for l in li:
                if l not in visited:
                    visited.add(l)
                    dfs(graph[l])

        for i in range(row):
            for j in range(col):
                if isConnected[i][j]==1:
                    graph[i].append(j)
                    
        for g in graph:
            if g not in visited:
                self.ans+=1
                dfs(graph[g])
        return self.ans


