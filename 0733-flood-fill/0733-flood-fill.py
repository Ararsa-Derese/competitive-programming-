class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        row=len(image)
        col=len(image[0])
        pixel=image[sr][sc]
        visited=set()
        def dfs(r,c):
            visited.add((r,c))
            direction = [[1,0],[-1,0],[0,1],[0,-1]]
            for dr, dc in direction:
                if (r+dr in range(row) and 
                    c+dc in range(col) and
                   (r+dr,c+dc) not in visited and 
                   image[r+dr][c+dc]==pixel):
                   dfs(r+dr,c+dc)
            image[r][c]=color
        direction = [[0,0],[1,0],[-1,0],[0,1],[0,-1]]
        for dr, dc in direction:
                if (sr+dr in range(row) and 
                    sc+dc in range(col) and
                   (sr+dr,sc+dc) not in visited and 
                   image[sr+dr][sc+dc]==pixel):
                   dfs(sr+dr,sc+dc)
        return image


