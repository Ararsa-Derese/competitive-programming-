class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        dic = defaultdict(list)
        ans=1
        for e in edges:
            if e[0] not in dic:
                dic[e[0]]=[]
            if e[1] not in dic:
                dic[e[1]]=[]
            dic[e[0]].append(e[1])
            dic[e[1]].append(e[0])
        for d in dic:
            if len(dic[d])>1:
                ans=d
        return ans
                



        
        