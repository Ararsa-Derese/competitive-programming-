from collections import defaultdict
n= int(input())
m= int(input())
graph=defaultdict(list)
def addEdge(li):
    graph[li[1]].append(li[2])
    graph[li[2]].append(li[1])
def printVertex(li):
    if graph[li[1]]!=[]:
        print(*graph[li[1]])
for i in range(m):
    li=list(map(int,input().split()))
    if li[0]==1:
        addEdge(li)
    else:
        printVertex(li)
