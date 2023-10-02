class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        que=deque()
        visited = set()
        que.append(0)
        visited.add(0)
        while que:
            idx=que.popleft()
            for i in rooms[idx]:
                if i not in visited:
                    que.append(i)
                    visited.add(i)
        for i in range(len(rooms)):
            for j in range(len(rooms[i])):
                if rooms[i][j] not in visited:
                    return False
        return True
                
