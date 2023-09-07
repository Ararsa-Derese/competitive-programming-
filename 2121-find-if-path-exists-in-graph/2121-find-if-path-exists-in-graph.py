class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        graph = defaultdict(list)
        for i,j in edges:
            graph[i].append(j)
            graph[j].append(i)

        visited = set()
        self.ans=False

        def dfs(node,visited):
            if node==destination:
                self.ans=True
                return
            visited.add(node)
            for g in graph[node]:
                if g not in visited:
                    dfs(g,visited)
        dfs(source,visited)  
        return self.ans     

