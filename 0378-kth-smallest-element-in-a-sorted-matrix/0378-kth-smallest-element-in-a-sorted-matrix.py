class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        li = []
        for i in range(len(matrix)):
            for j in range(len(matrix)):
                li.append(matrix[i][j])
        li.sort()
        return li[k-1]