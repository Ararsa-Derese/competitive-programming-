"""
# Definition for Employee.
class Employee:
    def __init__(self, id: int, importance: int, subordinates: List[int]):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates
"""

class Solution:
    def getImportance(self, employees: List['Employee'], id: int) -> int:
        self.ans=0
        def dfs(sub):
            for i in range(len(employees)):
                if employees[i].id in sub:
                    self.ans+=employees[i].importance
                    if employees[i].subordinates:
                         dfs(employees[i].subordinates)

        for i in range(len(employees)):
            if employees[i].id==id:
                self.ans+=employees[i].importance
                if employees[i].subordinates:
                    dfs(employees[i].subordinates)
        return self.ans


