class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        row=len(grid)
        col=len(grid[0])
        visited=set()
        self.ans=0
        self.count=0
        def dfs(r,c):
            self.count+=1
            if self.count>self.ans:
                self.ans=self.count
            visited.add((r,c))
            direction= [[1,0],[-1,0],[0,1],[0,-1]]
            for dr,dc in direction:
                if (r+dr in range(row) and
                   c+dc in range(col) and
                   (r+dr,c+dc) not in visited and
                   grid[r+dr][c+dc]==1):
                   dfs(r+dr,c+dc)

        for i in range(row):
            for j in range(col):
                if (i,j) not in visited and grid[i][j]==1:
                    self.count=0
                    dfs(i,j)
        return self.ans