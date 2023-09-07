n = int(input())
edges=[]
c=0
for i in range(n):
    li=list(map(int,input().split()))
    edges.append(li)
for i in range(n):
    for j in range(n):
        if edges[i][j]==1:
            c+=1
print(c//2)
