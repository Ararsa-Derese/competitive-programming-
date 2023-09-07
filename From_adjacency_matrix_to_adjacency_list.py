from collections import defaultdict
graph = defaultdict(list) 
n = int(input())
edges=[]
for i in range(n):
    li=list(map(int,input().split()))
    edges.append(li)
for i in range(n):
    for j in range(n):
        if edges[i][j]==1:
            graph[i+1].append(j+1)
for g in graph:
    print(len(graph[g]),*graph[g])
